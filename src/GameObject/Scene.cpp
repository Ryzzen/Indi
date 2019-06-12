/*
** EPITECH PROJECT, 2019
** indi
** File description:
** indi
*/

#include "Scene.hpp"

// Private functions

unsigned int Game::Scene::getUniqueId()
{
	std::random_device rd;
	std::mt19937_64 eng(rd());
	std::uniform_int_distribution<unsigned int> distr;
	unsigned int id = distr(eng);
	 
	for (id ; _gameObjetcs.count(id) ; id = rand());
	return (id);
}

// Public functions 

void Game::Scene::moveObject(unsigned int id, std::pair<float, float> offset)
{
	if (!_gameObjetcs[id]\
		|| (_gameObjetcs[id]->_position.first + offset.first < 0 || _gameObjetcs[id]->_position.first + offset.first > _width)\
		|| (_gameObjetcs[id]->_position.second + offset.second < 0 || _gameObjetcs[id]->_position.second + offset.second > _height))
		return;

	_map[static_cast<unsigned int>(_gameObjetcs[id]->_position.second)][static_cast<unsigned int>(_gameObjetcs[id]->_position.first)].removeObject(id);
	_gameObjetcs[id]->_position.first += offset.first;
	_gameObjetcs[id]->_position.second += offset.second;
	_map[static_cast<unsigned int>(_gameObjetcs[id]->_position.second)][static_cast<unsigned int>(_gameObjetcs[id]->_position.first)].addObject(id);
}

std::vector<unsigned int> Game::Scene::getPosistionObjectsIds(std::pair<float, float> position) const
{
	if ((position.first < 0 || position.first > _width)
		|| (position.second < 0 || position.second> _height))
		return (std::vector<unsigned int>());

	std::vector<unsigned int> result;
	for (unsigned int id : _map[static_cast<unsigned int>(position.second)][static_cast<unsigned int>(position.first)]._objects)
		result.push_back(id);
	return (result);
}

std::vector<std::string> Game::Scene::getPosistionObjectsTypes(std::pair<float, float> position)
{
	if ((position.first < 0 || position.first > _width)
		|| (position.second < 0 || position.second> _height))
		return (std::vector<std::string>());

	std::vector<std::string> result;
	for (unsigned int id : _map[static_cast<unsigned int>(position.second)][static_cast<unsigned int>(position.first)]._objects)
		result.push_back(_gameObjetcs[id]->_type);
	return (result);
}

void Game::Scene::update()
{
	for (auto const &object : _gameObjetcs)
		object.second->update();
}

void Game::Scene::takeAction(Game::e_action action)
{
	Game::objectActionFunction f = _actionHandler[action];
	if (!f)
		return;
	(*f)();
}

void Game::Scene::subscribeToAction(Game::e_action action, Game::objectActionFunction f)
{
	_actionHandler[action] = f;
}
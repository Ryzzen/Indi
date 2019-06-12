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

std::vector<std::unique_ptr<Game::GameObject>&> Game::Scene::getPosistionObjects(std::pair<float, float> position)
{
	if ((position.first < 0 || position.first > _width)
		|| (position.second < 0 || position.second> _height))
		return (std::vector<std::unique_ptr<Game::GameObject>&>());

	std::vector<std::unique_ptr<Game::GameObject>&> result;
	for (auto id : _map[position.second][position.first]._objects)
		result.push_back(getObjectById(id));
	return (result);
}
/*
** EPITECH PROJECT, 2019
** indi
** File description:
** indi
*/

#include "Scene.hpp"

// Global variables

    Game::Scene Game::scene = Game::Scene();

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

void Game::Scene::moveObject(unsigned int id, float offset_x, float offset_y)
{
    if (!_gameObjetcs[id]\
        || (_gameObjetcs[id]->_position.first + offset_x < 0 || _gameObjetcs[id]->_position.first + offset_x > _width)\
        || (_gameObjetcs[id]->_position.second + offset_y < 0 || _gameObjetcs[id]->_position.second + offset_y > _height))
        return;

    _map[static_cast<unsigned int>(_gameObjetcs[id]->_position.second)][static_cast<unsigned int>(_gameObjetcs[id]->_position.first)].removeObject(id);
    _gameObjetcs[id]->_position.first += offset_x;
    _gameObjetcs[id]->_position.second += offset_y;
    _map[static_cast<unsigned int>(_gameObjetcs[id]->_position.second)][static_cast<unsigned int>(_gameObjetcs[id]->_position.first)].addObject(id);
}

std::vector<unsigned int> Game::Scene::getPosistionObjectsIds(float x, float y) const
{
    if ((x < 0 || x >= _width)
        || (y < 0 || y >= _height))
        return (std::vector<unsigned int>());

    std::vector<unsigned int> result;
    for (unsigned int id : _map[static_cast<unsigned int>(y)][static_cast<unsigned int>(x)]._objects)
        result.push_back(id);
    return (result);
}

std::vector<std::string> Game::Scene::getPosistionObjectsTypes(float x, float y)
{
    if ((x < 0 || x >= _width)
        || (y < 0 || y >= _height))
        return (std::vector<std::string>());

    std::vector<std::string> result;
	if (_map[static_cast<unsigned int>(y)][static_cast<unsigned int>(x)]._objects.size() <= 0)
		return (result);
    for (unsigned int id : _map[static_cast<unsigned int>(y)][static_cast<unsigned int>(x)]._objects)
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
    std::function<void()> f = _actionHandler[action];
    if (!f)
        return;
    try
    {
        f();
    }
    catch (const std::exception&)
    {
        return;
    }

}

void Game::Scene::subscribeToAction(Game::e_action action, std::function<void()> f)
{
    _actionHandler[action] = f;
}

void Game::Scene::unsubscribeToAction(Game::e_action action)
{
	if (_actionHandler[action])
		_actionHandler.erase(action);
}

std::vector<unsigned int> Game::Scene::getIdsByType(std::string type)
{
    std::vector<unsigned int> ids;

    for (auto const &object : _gameObjetcs)
        ids.push_back(object.second->_id);
    return (ids);
}
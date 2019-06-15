/*
** EPITECH PROJECT, 2019
** Indi
** File description:
** bombes
*/

#include "bombes.hpp"

void Game::Bombe::explode()
{
    Bomberman *owner = static_cast<Bomberman*>(scene.getObjectById(_owner).get());

    if (owner) {
        if (owner->_bombs.size() <= 0)
            return;
        int i = 0;
        for (; i < owner->_bombs.size() || !owner->_bombs[i] ; i ++);
        if (i < owner->_bombs.size())
            owner->_bombs[i] = true;
    }
    std::vector<std::string> type = scene.getPosistionObjectsTypes(_position.first + 1, _position.second);
    for (int i = 2 ; i <= _radius || std::find(type.begin(), type.end(), Game::WALL) != type.end() ; i++) {
        if (std::find(type.begin(), type.end(), Game::SOFT_WALL) != type.end()) {
            scene.addObject(std::make_unique<Game::Explosion>(std::make_pair(_position.first + 1, _position.second)));
            break;
        }
        else
            scene.addObject(std::make_unique<Game::Explosion>(std::make_pair(_position.first + 1, _position.second)));
        std::vector<std::string> type = scene.getPosistionObjectsTypes(_position.first + i, _position.second);
    }

    type = scene.getPosistionObjectsTypes(_position.first - 1, _position.second);
    for (int i = 2 ; i <= _radius || std::find(type.begin(), type.end(), Game::WALL) != type.end() ; i++) {
        if (std::find(type.begin(), type.end(), Game::SOFT_WALL) != type.end()) {
            scene.addObject(std::make_unique<Game::Explosion>(std::make_pair(_position.first - 1, _position.second)));
            break;
        }
        else
            scene.addObject(std::make_unique<Game::Explosion>(std::make_pair(_position.first - 1, _position.second)));
        std::vector<std::string> type = scene.getPosistionObjectsTypes(_position.first - i, _position.second);
    }
    return;

    type = scene.getPosistionObjectsTypes(_position.first, _position.second + 1);
    for (int i = 2 ; i <= _radius || std::find(type.begin(), type.end(), Game::WALL) != type.end() ; i++) {
        if (std::find(type.begin(), type.end(), Game::SOFT_WALL) != type.end()) {
            scene.addObject(std::make_unique<Game::Explosion>(std::make_pair(_position.first, _position.second + 1)));
            break;
        }
        else
            scene.addObject(std::make_unique<Game::Explosion>(std::make_pair(_position.first, _position.second + 1)));
        std::vector<std::string> type = scene.getPosistionObjectsTypes(_position.first, _position.second + i);
    }

    type = scene.getPosistionObjectsTypes(_position.first, _position.second - 1);
    for (int i = 2 ; i <= _radius || std::find(type.begin(), type.end(), Game::WALL) != type.end() ; i++) {
        if (std::find(type.begin(), type.end(), Game::SOFT_WALL) != type.end()) {
            scene.addObject(std::make_unique<Game::Explosion>(std::make_pair(_position.first, _position.second - 1)));
            break;
        }
        else
            scene.addObject(std::make_unique<Game::Explosion>(std::make_pair(_position.first, _position.second - 1)));
        std::vector<std::string> type = scene.getPosistionObjectsTypes(_position.first, _position.second - i);
    }

    scene.addObject(std::make_unique<Game::Explosion>(_position));
}

void Game::Bombe::update()
{
    double timer = _clock.getClockTimer();
    if (timer >= 3)
        scene.removeObject(_id);
}
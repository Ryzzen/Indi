/*
** EPITECH PROJECT, 2019
** indi
** File description:
** indi
*/

#include "Bomberman.hpp"

void Game::Bomberman::moveRight()
{
    std::vector<std::string> objsTypes = scene.getPosistionObjectsTypes(_position.first + 1, _position.second);
    if ((std::find(objsTypes.begin(), objsTypes.end(), Game::WALL)!=objsTypes.end()) || (std::find(objsTypes.begin(), objsTypes.end(), Game::SOFT_WALL)!=objsTypes.end() && !_softBlockPass) || (std::find(objsTypes.begin(), objsTypes.end(), Game::BOMB)!=objsTypes.end()))
        return;
    scene.moveObject(_id, _speed, 0);
}

void Game::Bomberman::moveLeft()
{
    std::vector<std::string> objsTypes = scene.getPosistionObjectsTypes(_position.first - 1, _position.second);
    if ((std::find(objsTypes.begin(), objsTypes.end(), Game::WALL)!=objsTypes.end()) || (std::find(objsTypes.begin(), objsTypes.end(), Game::SOFT_WALL)!=objsTypes.end() && !_softBlockPass) || (std::find(objsTypes.begin(), objsTypes.end(), Game::BOMB)!=objsTypes.end()))
        return;
    scene.moveObject(_id, -_speed, 0);
}

void Game::Bomberman::moveUp()
{
    std::vector<std::string> objsTypes = scene.getPosistionObjectsTypes(_position.first, _position.second - 1);
    if ((std::find(objsTypes.begin(), objsTypes.end(), Game::WALL)!=objsTypes.end()) || (std::find(objsTypes.begin(), objsTypes.end(), Game::SOFT_WALL)!=objsTypes.end() && !_softBlockPass) || (std::find(objsTypes.begin(), objsTypes.end(), Game::BOMB)!=objsTypes.end()))
        return;
    scene.moveObject(_id, 0, -_speed);
}

void Game::Bomberman::moveDown()
{
    std::vector<std::string> objsTypes = scene.getPosistionObjectsTypes(_position.first + 1, _position.second + 1);
    if ((std::find(objsTypes.begin(), objsTypes.end(), Game::WALL)!=objsTypes.end()) || (std::find(objsTypes.begin(), objsTypes.end(), Game::SOFT_WALL)!=objsTypes.end() && !_softBlockPass) || (std::find(objsTypes.begin(), objsTypes.end(), Game::BOMB)!=objsTypes.end()))
        return;
    scene.moveObject(_id, 0, _speed);
}

void Game::Bomberman::putBomb()
{
    if (_bombs <= 0)
        return;
    scene.addObject(std::make_unique<Game::Bombe>(_firePower, _id, Game::BOMB_MESH_PATH, Game::BOMB_TXTU_PATH, static_cast<int>(_position.first) + 0.5, static_cast<int>(_position.second) + 0.5));
    _bombs -= 1;
}

void Game::Bomberman::update()
{
    _animationState = Game::ANIM_IDLE;
}
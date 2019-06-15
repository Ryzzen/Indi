/*
** EPITECH PROJECT, 2019
** Indi
** File description:
** Indi
*/

#include "Explosion.hpp"

void Game::Explosion::update()
{
    if (_clock.getClockTimer >= 2)
        scene.removeObject(_id);
}

void Game::Explosion::destruction()
{
    std::vector<unsigned int> ids = scene.getPosistionObjectsIds(_position.first, _position.second);
    for (auto id : ids) {
        if (id != _id)
            scene.removeObject(id);
    }
}
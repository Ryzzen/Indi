/*
** EPITECH PROJECT, 2019
** indi
** File description:
** indi
*/

#include "WallPass.hpp"

void update() {
    std::vector<std::string> vecstring = scene.getPositionObjectsTypes(std::get<0>(_position), std::get<1>(_position));
    std::vector<unsigned int> vecid;

    if (vecstring[1] == Game::P1 || vecstring[1] == Game::P2 || vecstring[1] == Game::P3 || vecstring[1] == Game::P4) {
        vecid = scene.getIdsByType(vecstring[1]);
        Game::Bomberman *bomber = static_cast<Bomberman*>(scene.getObjectById(vecid[0]).get());
        bomber->_softBlockPass = true;
    }
}

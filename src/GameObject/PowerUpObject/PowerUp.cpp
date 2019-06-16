/*
** EPITECH PROJECT, 2019
** indi
** File description:
** indi
*/

#include "PowerUp.hpp"



void Game::BombUp::update() {
    std::vector<std::string> vecstring = Game::scene.getPosistionObjectsTypes(std::get<0>(_position), std::get<1>(_position));
    std::vector<unsigned int> vecid;

    if (vecstring[0] == Game::P1 || vecstring[0] == Game::P2 || vecstring[0] == Game::P3 || vecstring[0] == Game::P4) {
        vecid = Game::scene.getIdsByType(vecstring[0]);
        Game::Bomberman *bomber = static_cast<Bomberman*>(Game::scene.getObjectById(vecid[0]).get());
        bomber->_bombs.push_back(true);
    }
}

void Game::FireUp::update() {
    std::vector<std::string> vecstring = Game::scene.getPosistionObjectsTypes(std::get<0>(_position), std::get<1>(_position));
    std::vector<unsigned int> vecid;

    if (vecstring[0] == Game::P1 || vecstring[0] == Game::P2 || vecstring[0] == Game::P3 || vecstring[0] == Game::P4) {
        vecid = Game::scene.getIdsByType(vecstring[0]);
        Game::Bomberman *bomber = static_cast<Bomberman*>(Game::scene.getObjectById(vecid[0]).get());
        bomber->_firePower += 1;
    }
}

void Game::SpeedUp::update() {
    std::vector<std::string> vecstring = Game::scene.getPosistionObjectsTypes(std::get<0>(_position), std::get<1>(_position));
    std::vector<unsigned int> vecid;

    if (vecstring[0] == Game::P1 || vecstring[0] == Game::P2 || vecstring[0] == Game::P3 || vecstring[0] == Game::P4) {
        vecid = Game::scene.getIdsByType(vecstring[0]);
        Game::Bomberman *bomber = static_cast<Bomberman*>(Game::scene.getObjectById(vecid[0]).get());
        bomber->_speed += 0.1;
    }
}

void Game::WallPass::update() {
    std::vector<std::string> vecstring = Game::scene.getPosistionObjectsTypes(std::get<0>(_position), std::get<1>(_position));
    std::vector<unsigned int> vecid;

    if (vecstring[0] == Game::P1 || vecstring[0] == Game::P2 || vecstring[0] == Game::P3 || vecstring[0] == Game::P4) {
        vecid = Game::scene.getIdsByType(vecstring[0]);
        Game::Bomberman *bomber = static_cast<Bomberman*>(Game::scene.getObjectById(vecid[0]).get());
        bomber->_softBlockPass = true;
    }
}

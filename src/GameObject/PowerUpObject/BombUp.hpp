/*
** EPITECH PROJECT, 2019
** indi
** File description:
** indi
*/

#ifndef BOMBUP
#define BOMBUP

#include <vector>
#include <string>
#include <iostream>
#include <functional>

namespace Game {

    class BombUp : public GameObject {
        BombUp(std::string type = "BombUp", std::string meshPath = Game::BOMBUP_MESH_PATH, std::string texturePath = Game::BOMBUP_TXTU_PATH, std::pair<float, float> position = std::make_pair(0.f, 0.f))
        : Game::GameObject(type, meshPath, texturePath, position)
        {}
        void update();
    }
}
#endif

/*
** EPITECH PROJECT, 2019
** indi
** File description:
** indi
*/

#ifndef SPEEDUP
#define SPEEDUP

#include <vector>
#include <string>
#include <iostream>
#include <functional>

namespace Game {

    class SpeedUp : public GameObject {
        SpeedUp(std::string type = "SpeedUp", std::string meshPath = Game::SPEEDUP_MESH_PATH, std::string texturePath = Game::SPEEDUP_TXTU_PATH, std::pair<float, float> position = std::make_pair(0.f, 0.f))
        : Game::GameObject(type, meshPath, texturePath, position)
        {}
        void update();
    }
}
#endif

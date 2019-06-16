/*
** EPITECH PROJECT, 2019
** indi
** File description:
** indi
*/

#ifndef WALLPASS
#define WALLPASS

#include <vector>
#include <string>
#include <iostream>
#include <functional>

namespace Game {

    class WallPass : public GameObject {
        WallPass(std::string type = "WallPass", std::string meshPath = Game::WALLPASS_MESH_PATH, std::string texturePath = Game::WALLPASS_TXTU_PATH, std::pair<float, float> position = std::make_pair(0.f, 0.f))
        : Game::GameObject(type, meshPath, texturePath, position)
        {}
        void update();
    }
}
#endif

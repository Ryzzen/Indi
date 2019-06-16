/*
** EPITECH PROJECT, 2019
** indi
** File description:
** indi
*/

#ifndef FIREUP
#define FIREUP

#include <vector>
#include <string>
#include <iostream>
#include <functional>

namespace Game {

    class FireUp : public GameObject {
        FireUp(std::string type = "FireUp", std::string meshPath = Game::FIREUP_MESH_PATH, std::string texturePath = Game::FIREUP_TXTU_PATH, std::pair<float, float> position = std::make_pair(0.f, 0.f))
        : Game::GameObject(type, meshPath, texturePath, position)
        {}
        void update();
    }
}
#endif

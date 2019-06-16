/*
** EPITECH PROJECT, 2019
** indi
** File description:
** indi
*/

#ifndef BOMBUP
#define BOMBUP

#include "../Bomberman/Bomberman.hpp"
#include "../../Game/game.hpp"
#include "../GameObject.hpp"
#include "../Scene.hpp"

namespace Game {
    class BombUp : public Game::GameObject {
    public:
        BombUp(std::string type = "BonbUp", std::pair<float, float> position = std::make_pair(0.f, 0.f), std::string meshPath = Game::BOMBERMAN_TXTU_PATH, std::string texturePath = Game::BOMBERMAN_MESH_PATH)
            : Game::GameObject(type, meshPath, texturePath, position) {}
        ~BombUp() {}
        void update();
    };
    class FireUp : public Game::GameObject {
    public:
        FireUp(std::string type = "FireUp", std::string meshPath = Game::FIREUP_MESH_PATH, std::string texturePath = Game::FIREUP_TXTU_PATH, std::pair<float, float> position = std::make_pair(0.f, 0.f))
        : Game::GameObject(type, meshPath, texturePath, position)
        {}
        void update();
    };
    class SpeedUp : public Game::GameObject {
        public:
        SpeedUp(std::string type = "SpeedUp", std::string meshPath = Game::SPEEDUP_MESH_PATH, std::string texturePath = Game::SPEEDUP_TXTU_PATH, std::pair<float, float> position = std::make_pair(0.f, 0.f))
        : Game::GameObject(type, meshPath, texturePath, position)
        {}
        void update();
    };
    class WallPass : public Game::GameObject {
        public:
        WallPass(std::string type = "WallPass", std::string meshPath = Game::WALLPASS_MESH_PATH, std::string texturePath = Game::WALLPASS_TXTU_PATH, std::pair<float, float> position = std::make_pair(0.f, 0.f))
        : Game::GameObject(type, meshPath, texturePath, position)
        {}
        void update();
    };
}
#endif

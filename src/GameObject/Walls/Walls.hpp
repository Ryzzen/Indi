/*
** EPITECH PROJECT, 2019
** indi
** File description:
** indi
*/

#ifndef WALLS
    #define WALLS

#include "../GameObject.hpp"
#include "../Scene.hpp"


namespace Game {
    class HardWall : public Game::GameObject {
    public:
#pragma region Constructor / Destructor
        HardWall(std::string type = Game::WALL, std::pair<float, float> position = std::make_pair(0.f, 0.f), std::string meshPath = Game::HARDWALL_TXTU_PATH, std::string texturePath = Game::HARDWALL_MESH_PATH)
            : Game::GameObject(type, meshPath, texturePath, position)
        {

        }
#pragma endregion
    };

    class SoftWall : public Game::GameObject {
    public:
#pragma region Constructor / Destructor
        SoftWall(std::string type = Game::SOFT_WALL, std::pair<float, float> position = std::make_pair(0.f, 0.f), std::string meshPath = Game::SOFTWALL_TXTU_PATH, std::string texturePath = Game::SOFTWALL_MESH_PATH)
            : Game::GameObject(type, meshPath, texturePath, position)
        {
            // std::srand(std::time(nullptr));
            // int randVar = 1 + std::rand()/((RAND_MAX + 1u) / 100);

            // if (randVar <= 20) {
            //     randVar = 1 + std::rand()/((RAND_MAX + 1u) / 4);
            //     switch randVar {
            //         case 1:
            //         Game::scene.addObject(std::make_unique<Game::Boost>(Game::BOOST, std::make_pair(position.first, position.second)));
            //         break;
            //         case 2:
            //         Game::scene.addObject(std::make_unique<Game::Boost>(Game::BOOST, std::make_pair(position.first, position.second));
            //         break;
            //         case 3;
            //         Game::scene.addObject(std::make_unique<Game::Boost>(Game::BOOST, std::make_pair(position.first, position.second));
            //         break;
            //         case 4;
            //         Game::scene.addObject(std::make_unique<Game::Boost>(Game::BOOST, std::make_pair(position.first, position.second));
            //         break;
            //     }
            // }
        }
#pragma endregion
    };
}

#endif /* !WALLS */
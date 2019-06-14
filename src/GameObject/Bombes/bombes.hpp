/*
** EPITECH PROJECT, 2019
** indi
** File description:
** indi
*/

#ifndef BOMBES
    #define BOMBES

#include "../GameObject.hpp"
#include "../Bomberman/Bomberman.hpp"

namespace Game {
    class Bombe : public Game::GameObject {
        public:
                #pragma region publicValues

                #pragma endregion

                #pragma region Constructor / Destructor
                Bombe(const int radius, const int owner, std::string mesh, std::string texture, std::string type = Game::BOMB, std::pair<float, float> position = std::make_pair(0.f, 0.f)):
                        Game::GameObject(type, mesh, texture, position)
                        {
                                _radius = radius;
                                _owner = owner;
                        }
                ~Bombe();
                #pragma endregion

                #pragma region setter / getter
                const int getRadius() {return (_radius);}
                void setRadius(const int radius) {_radius = radius;}
                #pragma endregion

                #pragma region bombFunctions
                void put();
                #pragma endregion
        private:
                int _radius;
                int _owner;
                void _explode();
    };
}

#endif /* !BOMBERMAN */
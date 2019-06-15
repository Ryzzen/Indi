/*
** EPITECH PROJECT, 2019
** indi
** File description:
** indi
*/

#ifndef BOMBES
    #define BOMBES

#include "../Bomberman/Bomberman.hpp"
#include "../../Clock/clock.hpp"
#include "Explosion/Explosion.hpp"

namespace Game {
    class Bombe : public Game::GameObject {
        public:
                #pragma region publicValues

                #pragma endregion

                #pragma region Constructor / Destructor
                Bombe(const int radius, const int owner, std::pair<float, float> position = std::make_pair(0.f, 0.f), std::string mesh = BOMB_MESH_PATH, std::string texture = BOMB_TXTU_PATH, std::string type = Game::BOMB):
                        Game::GameObject(type, mesh, texture, position)
                        {
                                _radius = radius;
                                _owner = owner;
                                _clock.startClock();
                        }
                ~Bombe() { explode(); }
                #pragma endregion

                #pragma region setter / getter
                const int getRadius() {return (_radius);}
                void setRadius(const int radius) {_radius = radius;}
                #pragma endregion

                #pragma region bombFunctions
                void update();
                #pragma endregion
        private:
                int _radius;
                int _owner;
                Game::Clock _clock;

                void explode();
    };
}

#endif /* !BOMBERMAN */
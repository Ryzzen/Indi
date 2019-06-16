/*
** EPITECH PROJECT, 2019
** indi
** File description:
** indi
*/

#ifndef BOMBERMAN
    #define BOMBERMAN

#include "../GameObject.hpp"
#include "../Scene.hpp"
#include "../Bombes/bombes.hpp"

namespace Game {
    class Bomberman : public Game::GameObject {
    public:
#pragma region Attributs
        std::vector<bool> _bombs;
        float _speed;
        int _firePower;
        bool _softBlockPass;
#pragma endregion

#pragma region Constructor / Destructor
        Bomberman(std::string type, std::pair<float, float> position = std::make_pair(0.f, 0.f), std::string meshPath = Game::BOMBERMAN_TXTU_PATH, std::string texturePath = Game::BOMBERMAN_MESH_PATH, int bombs = 1, float speed = 0.1, int firePower = 2, bool softBlockPass = false)
            : Game::GameObject(type, meshPath, texturePath, position),
            _bombs(bombs),
            _speed(speed),
            _firePower(firePower),
            _softBlockPass(softBlockPass)
        {
            if (type == P1) {
                Game::scene.subscribeToAction(Game::P1_MV_RIGHT, std::bind(&Game::Bomberman::moveRight, this));
                Game::scene.subscribeToAction(Game::P1_MV_LEFT, std::bind(&Game::Bomberman::moveRight, this));
                Game::scene.subscribeToAction(Game::P1_MV_UP, std::bind(&Game::Bomberman::moveRight, this));
                Game::scene.subscribeToAction(Game::P1_MV_DOWN, std::bind(&Game::Bomberman::moveRight, this));
			    Game::scene.subscribeToAction(Game::P1_PUT_BOMB, std::bind(&Game::Bomberman::putBomb, this));
            } else if (type == P2) {
                Game::scene.subscribeToAction(Game::P2_MV_RIGHT, std::bind(&Game::Bomberman::moveRight, this));
                Game::scene.subscribeToAction(Game::P2_MV_LEFT, std::bind(&Game::Bomberman::moveRight, this));
                Game::scene.subscribeToAction(Game::P2_MV_UP, std::bind(&Game::Bomberman::moveRight, this));
                Game::scene.subscribeToAction(Game::P2_MV_DOWN, std::bind(&Game::Bomberman::moveRight, this));
			    Game::scene.subscribeToAction(Game::P2_PUT_BOMB, std::bind(&Game::Bomberman::putBomb, this));
            }
        }
        ~Bomberman()
        {
            _animationState = Game::ANIM_DYING;
            //Game::scene.unsubscribeToAction(Game::P1_MV_RIGHT);
            Game::scene.unsubscribeToAction(Game::P1_PUT_BOMB);
        }
#pragma endregion

#pragma region Moves
        void moveRight();
        void moveLeft();
        void moveUp();
        void moveDown();
#pragma endregion

#pragma region Actions
        void putBomb();
        void update();
#pragma endregion
    };
}

#endif /* !BOMBERMAN */
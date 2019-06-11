/*
** EPITECH PROJECT, 2019
** Indi
** File description:
** power up
*/

#ifndef POWERUP
    #define POWERUP

#include "./../gameObject.hpp"
#include "./../Bomberman/bomberman.hpp"

namespace Game {
	class Powerup : public Game::GameObject {
        public:
            short _valueSpeed;
            short _valueFire;
            short _valueBombs;

#pragma region Constructor / Destructor
    Powerup(std::string type, std::pair<float, float> position, std::string meshPath, std::string texturePath, short valueSpeed = 0, short valueFire = 0, short valueBombs = 0)
			: _position(position),
			_type(type),
			_meshPath(meshPath),
			_texturePath(texturePath),
            _valueSpeed(valueSpeed),
            _valueFire(_valueFire),
            _valueBombs(_valueBombs)
            {}
    ~Powerup();
#pragma endregion

#pragma region Apply
    void applyPowerup(Bomberman *bomberman);
#pragma endregion
    };
}

#endif /* !POWERUP */
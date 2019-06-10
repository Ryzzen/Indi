/*
** EPITECH PROJECT, 2019
** indi
** File description:
** indi
*/

#ifndef BOMBERMAN
	#define BOMBERMAN

#include "gameObject.hpp"

namespace Game {
	class Bomberman : public Game::GameObject {
	public:
		int _bombs;
		float _speed;
		int _firePower;
		bool _softBlockPass;

		Bomberman(std::string type, std::pair<float, float> position = std::pair<float, float>(0, 0), int bombs = 0, float speed = 0.1, int firePower = 1, bool softBlockPass = false)
			: _position(position),
			_type(type),
			_bombs(bombs),
			_speed(speed),
			_firePower(firePower),
			_softBlockPass(softBlockPass)
		{}
		~Bomberman();
	};
}

#endif /* !BOMBERMAN */
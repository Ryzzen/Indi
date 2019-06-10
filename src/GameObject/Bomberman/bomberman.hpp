/*
** EPITECH PROJECT, 2019
** indi
** File description:
** indi
*/

#ifndef BOMBERMAN
	#define BOMBERMAN

#include "../gameObject.hpp"
#include <string>

namespace Game {
	class Bomberman : public Game::GameObject {
	public:
		int _bombs;
		float _speed;
		int _firePower;
		bool _softBlockPass;
		Game::e_animation _animationState = Game::ANIM_IDLE;

		Bomberman(std::string type, std::pair<float, float> position = std::pair<float, float>(0, 0), std::string meshPath, std::string texturePath, int bombs = 0, float speed = 0.1, int firePower = 1, bool softBlockPass = false)
			: _position(position),
			_type(type),
			_bombs(bombs),
			_speed(speed),
			_firePower(firePower),
			_softBlockPass(softBlockPass),
			_meshPath(meshPath),
			_texturePath(texturePath)
		{}
		~Bomberman();
		putBomb();
	};
}

#endif /* !BOMBERMAN */
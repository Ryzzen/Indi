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
#pragma region Attributs
		int _bombs;
		float _speed;
		int _firePower;
		bool _softBlockPass;
#pragma endregion

#pragma region Constructor / Destructor
		Bomberman(std::string type, std::string meshPath, std::string texturePath, std::pair<float, float> position = std::pair<float, float>(0, 0), int bombs = 0, float speed = 0.1, int firePower = 1, bool softBlockPass = false)
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
#pragma endregion

#pragma region Moves
		moveRight();
		moveLeft();
		moveUp();
		moveDown();
#pragma endregion

#pragma region Actions
		putBomb();
#pragma endregion
	};
}

#endif /* !BOMBERMAN */
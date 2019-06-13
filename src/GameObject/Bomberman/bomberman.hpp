/*
** EPITECH PROJECT, 2019
** indi
** File description:
** indi
*/

#ifndef BOMBERMAN
	#define BOMBERMAN

#include "../gameObject.hpp"
#include "../Scene.hpp"

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
		Bomberman(std::string type, std::string meshPath, std::string texturePath, std::pair<float, float> position = std::make_pair(0.f, 0.f), int bombs = 0, float speed = 0.1, int firePower = 1, bool softBlockPass = false)
			: Game::GameObject(type, meshPath, texturePath, position),
			_bombs(bombs),
			_speed(speed),
			_firePower(firePower),
			_softBlockPass(softBlockPass)
		{
			Game::scene.subscribeToAction(Game::P1_MV_RIGHT, std::bind(&Game::GameObject::moveRight, this));
		}
		~Bomberman()
		{
			_animationState = Game::ANIM_DYING;
			Game::scene.unsubscribeToAction(Game::P1_MV_RIGHT);
		}
#pragma endregion

#pragma region Moves
		void moveRight() { std::cout << "I am " << _type << std::endl; };
		/*void moveLeft();
		void moveUp();
		void moveDown();*/
#pragma endregion

#pragma region Actions
		//void putBomb();
#pragma endregion
	};
}

#endif /* !BOMBERMAN */
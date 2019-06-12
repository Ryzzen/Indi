/*
** EPITECH PROJECT, 2019
** indi
** File description:
** indi
*/

#ifndef gameObject
	#define gameObject

#include <vector>
#include <string>

namespace Game {

	constexpr auto P1 = "player_1";
	constexpr auto P2 = "player_2";
	constexpr auto BOMB = "bomb";
	constexpr auto WALL = "wall";
	constexpr auto SOFT_WALL = "soft_wall";
	constexpr auto PW_SPEED = "power_up_speed";
	constexpr auto PW_FIRE = "power_up_fire";
	constexpr auto PW_SFT_WALL_PASS = "power_up_soft_wall_pass";

	enum e_animation {
		ANIM_IDLE,
		ANIM_WALKING,
		ANIM_EXPLODE,
		ANIM_DYING,
	};

	class GameObject {
	public:
		std::string _type;
		std::pair<float, float> _position;
		std::string _meshPath = NULL;
		std::string _texturePath = NULL;
		Game::e_animation _animationState = Game::ANIM_IDLE;
		int _id = 0;

		GameObject(std::string type, std::string meshPath, std::string texturePath, std::pair<float, float> position = std::make_pair(0.f, 0.f))
			: _position(position),
			_type(type),
			_meshPath(meshPath),
			_texturePath(texturePath)
		{}

		virtual ~GameObject() {}
	};

}


#endif /* !gameObject */

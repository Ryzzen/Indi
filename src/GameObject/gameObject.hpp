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

		GameObject(std::string type, std::pair<float, float> position, std::string meshPath, std::string texturePath)
			: _position(position),
			_type(type),
			_meshPath(meshPath),
			_texturePath(texturePath)
		{}

		virtual ~GameObject() {}
	};

}


#endif /* !gameObject */

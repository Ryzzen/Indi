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

    class GameObject {
    public:
        std::string _type;
        std::pair<float, float> _position;
		std::string _meshPath = NULL;
		std::string _texturePath = NULL;

		virtual GameObject();
		virtual ~GameObject();
    };

}


#endif /* !gameObject */

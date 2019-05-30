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

        GameObject(std::string type, std::pair<float, float> position)
            : _position(position),
            _type(type)
        {}
    };

}


#endif /* !gameObject */

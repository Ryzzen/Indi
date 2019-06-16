/*
** EPITECH PROJECT, 2019
** indi
** File description:
** indi
*/

#ifndef EXPLOSION
    #define EXPLOSION

#include "../bombes.hpp"

namespace Game {
    class Explosion : public Game::GameObject {
    public:
        Explosion(unsigned int owner, std::pair<float, float> position = std::make_pair(0.f, 0.f), std::string type = Game::BOMB_EXPLOSION, std::string meshPath = Game::EXPLOSION_MESH_PATH, std::string texturePath = Game::EXPLOSION_TXTU_PATH)
            : Game::GameObject(type, meshPath, texturePath, position),
            _owner(owner)
            {
				destruction();
                _clock.startClock();
            }

        void update();
    private:
        Game::Clock _clock;
        void destruction();
        unsigned int _owner;
        friend class boost::serialization::access;
        template<class Archive>
        void serialize(Archive & ar, const unsigned int version) {
            ar & boost::serialization::base_object<GameObject>(*this);
            ar & _clock & _owner;
        }
    };
}

#endif /* !EXPLOSION */

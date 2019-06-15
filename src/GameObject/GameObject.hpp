/*
** EPITECH PROJECT, 2019
** indi
** File description:
** indi
*/

#ifndef GAMEOBJECT
    #define GAMEOBJECT

#include <vector>
#include <string>
#include <iostream>
#include <functional>
#include <algorithm>

namespace Game {

    constexpr auto P1 = "player_1";
    constexpr auto P2 = "player_2";
    constexpr auto P3 = "player_3";
    constexpr auto P4 = "player_4";
    constexpr auto BOMB = "bomb";
    constexpr auto WALL = "wall";
    constexpr auto SOFT_WALL = "soft_wall";
    constexpr auto BOMB_EXPLOSION = "explosion";
    constexpr auto PW_SPEED = "power_up_speed";
    constexpr auto PW_FIRE = "power_up_fire";
    constexpr auto PW_SFT_WALL_PASS = "power_up_soft_wall_pass";

    constexpr auto BOMB_TXTU_PATH = "texture/path";
    constexpr auto BOMB_MESH_PATH = "texture/mesh";
    constexpr auto BOMBERMAN_TXTU_PATH = "texture/path";
    constexpr auto BOMBERMAN_MESH_PATH = "texture/mesh";
    constexpr auto EXPLOSION_TXTU_PATH = "texture/path";
    constexpr auto EXPLOSION_MESH_PATH = "texture/mesh";


    enum e_animation {
        ANIM_IDLE,
        ANIM_WALKING,
        ANIM_EXPLODE,
        ANIM_DYING,
    };

    class IGameObject {
    public:
        virtual void update() = 0;
    };

    class GameObject : public IGameObject {
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

        virtual void update();
    };

}


#endif /* !GAMEOBJECT */

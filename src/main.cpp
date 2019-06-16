/*
** EPITECH PROJECT, 2019
** Indi
** File description:
** main.cpp
*/

#include "Game/game.hpp"
#include "GameObject/GameObject.hpp"
#include "GameObject/Bomberman/Bomberman.hpp"
#include "GameObject/Scene.hpp"
#include "GameObject/PowerUpObject/PowerUp.hpp"

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;
using namespace MainMenu;

#ifdef _IRR_WINDOWS_
#pragma comment(lib, "Irrlicht.lib")
#endif

void play_1p()
{
    std::cout << "play 1 players" << std::endl;
}

void play_2p()
{
    std::cout << "play 2 players" << std::endl;
}

void quit()
{
    std::cout << "quit" << std::endl;
    exit(0);
}

void load()
{
    std::cout << "load" << std::endl;
}

void settings()
{
    std::cout << "settings" << std::endl;
}

int main()
{
    GameManager *my_game = new GameManager((void *)&play_1p, (void *)&play_2p, (void *)&quit, (void *)&load, (void *)&settings);


    Game::scene.addObject(std::make_unique<Game::Bomberman>(Game::P1));
    std::vector<unsigned int> vecid = Game::scene.getIdsByType(Game::P1);
    Game::Bomberman *bomber = static_cast<Game::Bomberman*>(Game::scene.getObjectById(vecid[0]).get());

//    Game::scene.takeAction(Game::P1_PUT_BOMB);

    Game::scene.addObject(std::make_unique<Game::BombUp>());
    vecid = Game::scene.getIdsByType("BonbUp");
    Game::BombUp *bombupdate = static_cast<Game::BombUp*>(Game::scene.getObjectById(vecid[0]).get());
    bombupdate->update();

    Game::scene.cleanScene();
    return 0;
}

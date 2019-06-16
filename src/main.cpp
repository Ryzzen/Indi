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

    my_game->launchMenuLoop();

    Game::scene.addObject(std::make_unique<Game::Bomberman>(Game::P1));
    Game::scene.takeAction(Game::P1_PUT_BOMB);
    Game::scene.cleanScene();
    return 0;
}
/*
** EPITECH PROJECT, 2019
** Indi
** File description:
** main.cpp
*/

#include "game.hpp"

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

void play()
{
    std::cout << "play" << std::endl;
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

int main()
{
    GameManager *my_game = new GameManager((void *)&play, (void *)&quit, (void *)&load);

    my_game->launchMenuLoop();
    return 0;
}
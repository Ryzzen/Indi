/*
** EPITECH PROJECT, 2019
** Indi
** File description:
** main.cpp
*/

#include "Menu/menu.hpp"
#include "Settings/settings.hpp"

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

#ifdef _IRR_WINDOWS_
#pragma comment(lib, "Irrlicht.lib")
#endif

static IrrManager *irrMgr = new IrrManager();

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
    Settings *my_settings = new Settings(irrMgr);
}

int main()
{
    Menu *my_menu = new Menu(irrMgr, play_1p, play_2p, quit, load, settings);

    return 0;
}
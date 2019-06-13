/*
** EPITECH PROJECT, 2019
** Indi
** File description:
** Game.hpp
*/

#ifndef GAME_MANAGER
#define GAME_MANAGER

#include <iostream>
#include <vector>
#include <irrlicht.h>
#include "IndiReceiver/IndiReceiver.hpp"
#include "Menu/menu.hpp"
#include "Keyboard/Keyboard.hpp"
#include "IrrManager.hpp"

class GameManager {
    public:
        GameManager(void *play, void *quit, void *load);
        ~GameManager();
        void launchMenuLoop();
    protected:
    private:
        IrrManager *_irrmgr;
        MainMenu::Menu *_menu;
        void (*_playFunc)();
        void (*_quitFunc)();
        void (*_loadFunc)();
};

#endif /* !GAME_MANAGER */

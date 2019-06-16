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
#include "./../IndiReceiver/IndiReceiver.hpp"
#include "./../Menu/menu.hpp"
#include "./../Keyboard/Keyboard.hpp"
#include "./../IrrManager/IrrManager.hpp"

class GameManager {
    public:
        GameManager(void *play_1p, void *play_2p, void *quit, void *load, void *settings);
        ~GameManager();
        void launchMenuLoop();
    protected:
    private:
        IrrManager *_irrmgr;
        MainMenu::Menu *_menu;

        friend class boost::serialization::access;
        template<class Archive>
        void serialize(Archive &ar, const unsigned int version) {
            ar & _irrmgr & _menu;
        }
};

#endif /* !GAME_MANAGER */

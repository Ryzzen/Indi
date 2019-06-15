/*
** EPITECH PROJECT, 2019
** Indi
** File description:
** IrrManager
*/

#ifndef IRRMANAGER
#define IRRMANAGER

#include <iostream>
#include <vector>
#include <irrlicht.h>
#include "./../Keyboard/Keyboard.hpp"

class IrrManager {

    struct menuButtons {
        irr::gui::IGUIButton *buttonPlay1;
        irr::gui::IGUIButton *buttonPlay2;
        irr::gui::IGUIButton *buttonQuit;
        irr::gui::IGUIButton *buttonLoad;
        irr::gui::IGUIButton *buttonSettings;
    };

    public:
        IrrManager();
        ~IrrManager();
        void deleteButtons();
        bool _menuUP;
        bool _settingsUP;
        struct menuButtons _butts;
        IndiReceiver _receiver;
        irr::IrrlichtDevice *_device;
        irr::video::IVideoDriver *_driver;
        irr::scene::ISceneManager *_smgr;
        irr::gui::IGUIEnvironment *_guienv;
};

#endif /* !IRRMANAGER */

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
#include "./../Menu/menu.hpp"
#include "./../Keyboard/Keyboard.hpp"

class IrrManager {
    public:
        IrrManager();
        ~IrrManager();
        void setMenu(MainMenu::Menu *my_menu) {this->_receiver.setMenu(my_menu);}
//  SEGAULT WHEN USED:
/*      IndiReceiver getReceiver() {return _receiver;}
        IrrlichtDevice *getDevice() {return _device;}
        irr::video::IVideoDriver *getDriver() {return _driver;}
        irr::scene::ISceneManager *getSceneManager() {return _smgr;}
        irr::gui::IGUIEnvironment *getGuiEnv() {return _guienv;}
    private:
*/        IndiReceiver _receiver;
        IrrlichtDevice *_device;
        irr::video::IVideoDriver *_driver;
        irr::scene::ISceneManager *_smgr;
        irr::gui::IGUIEnvironment *_guienv;
};

#endif /* !IRRMANAGER */

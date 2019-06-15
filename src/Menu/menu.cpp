/*
** EPITECH PROJECT, 2019
** Indie
** File description:
** menu.cpp
*/

#include "menu.hpp"

using namespace irr;

Menu::Menu(IrrManager *irr, void (*play)(), void (*play2)(), void (*quit)(), void (*load)(), void (*settings)()):
_irrMgr(irr)
{
    this->_irrMgr->deleteButtons();
    this->_irrMgr->_menuUP = true;
    this->_irrMgr->_receiver.setPlayFunc(play);
    this->_irrMgr->_receiver.setPlay2Func(play2);
    this->_irrMgr->_receiver.setQuitFunc(quit);
    this->_irrMgr->_receiver.setLoadFunc(load);
    this->_irrMgr->_receiver.setSettingsFunc(settings);
    this->_irrMgr->_butts.buttonPlay1 = this->_irrMgr->_guienv->addButton(irr::core::rect<irr::s32>(20, 20, 150, 100), 0, 1, L"PLAY\nSOLO");
    this->_irrMgr->_butts.buttonPlay2 = this->_irrMgr->_guienv->addButton(irr::core::rect<irr::s32>(150, 20, 300, 100), 0, 4, L"PLAY\nMULTI");
    this->_irrMgr->_butts.buttonQuit = this->_irrMgr->_guienv->addButton(irr::core::rect<irr::s32>(20, 120, 300, 200), 0, 2, L"QUIT");
    this->_irrMgr->_butts.buttonLoad = this->_irrMgr->_guienv->addButton(irr::core::rect<irr::s32>(20, 220, 300, 300), 0, 3, L"LOAD");
    this->_irrMgr->_butts.buttonSettings = this->_irrMgr->_guienv->addButton(irr::core::rect<irr::s32>(20, 320, 300, 400), 0, 5, L"SETTINGS");

    while (this->_irrMgr->_device->run())
    {
        this->_irrMgr->_driver->beginScene(true, true, irr::video::SColor(255, 100, 101, 140));
        this->_irrMgr->_smgr->drawAll();
        this->_irrMgr->_guienv->drawAll();
        this->_irrMgr->_driver->endScene();
    }
}

Menu::~Menu()
{
}
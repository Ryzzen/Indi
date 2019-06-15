/*
** EPITECH PROJECT, 2019
** Indi
** File description:
** Settings.cpp
*/

#include "settings.hpp"

Settings::Settings(IrrManager *irr):
_irrMgr(irr)
{
    this->_irrMgr->deleteButtons();
    this->_irrMgr->_settingsUP = true;
    while (this->_irrMgr->_device->run())
    {
        this->_irrMgr->_driver->beginScene(true, true, irr::video::SColor(255, 100, 101, 140));
        this->_irrMgr->_smgr->drawAll();
        this->_irrMgr->_guienv->drawAll();
        this->_irrMgr->_driver->endScene();
    }
}

Settings::~Settings()
{
}
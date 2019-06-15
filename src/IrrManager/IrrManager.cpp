/*
** EPITECH PROJECT, 2019
** Indi
** File description:
** IrrManager.cpp
*/

#include "IrrManager.hpp"

IrrManager::IrrManager()
{
    this->_menuUP = false;
    this->_settingsUP = false;
    this->_device = irr::createDevice(irr::video::EDT_SOFTWARE, irr::core::dimension2d<irr::u32>(640, 480), 16,
            false, false, false, &(this->_receiver));
    if (!this->_device)
        exit(84);
    this->_device->setWindowCaption(L"Indie Studio");
    this->_driver = this->_device->getVideoDriver();
    this->_smgr = this->_device->getSceneManager();
    this->_guienv = this->_device->getGUIEnvironment();
}

IrrManager::~IrrManager()
{
}

void IrrManager::deleteButtons()
{
    if (this->_menuUP) {
        this->_menuUP = false;
        this->_butts.buttonPlay1->setVisible(false);
        this->_butts.buttonPlay2->setVisible(false);
        this->_butts.buttonQuit->setVisible(false);
        this->_butts.buttonLoad->setVisible(false);
        this->_butts.buttonSettings->setVisible(false);
    } else if (this->_settingsUP) {
        this->_settingsUP = false;
    }
}
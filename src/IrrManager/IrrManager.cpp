/*
** EPITECH PROJECT, 2019
** Indi
** File description:
** IrrManager.cpp
*/

#include "IrrManager.hpp"

IrrManager::IrrManager()
{
    this->_device = createDevice(video::EDT_SOFTWARE, irr::core::dimension2d<irr::u32>(640, 480), 16,
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
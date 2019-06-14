/*
** EPITECH PROJECT, 2019
** Indi
** File description:
** Game.cpp
*/

#include "game.hpp"

GameManager::GameManager(void *play_1p, void *play_2p, void *quit, void *load, void *settings)
{
    this->_irrmgr = new IrrManager();
    this->_menu = new MainMenu::Menu(this->_irrmgr->_guienv);
    this->_irrmgr->_receiver.setMenu(this->_menu);
    this->_irrmgr->_receiver.setPlayFunc(play_1p);
    this->_irrmgr->_receiver.setPlay2Func(play_2p);
    this->_irrmgr->_receiver.setQuitFunc(quit);
    this->_irrmgr->_receiver.setLoadFunc(load);
    this->_irrmgr->_receiver.setSettingsFunc(settings);
}

void GameManager::launchMenuLoop()
{
    while (this->_irrmgr->_device->run() and this->_menu->isAlive())
    {
        this->_irrmgr->_driver->beginScene(true, true, irr::video::SColor(255, 100, 101, 140));
        this->_irrmgr->_smgr->drawAll();
        this->_irrmgr->_guienv->drawAll();
        this->_irrmgr->_driver->endScene();
    }
    this->_irrmgr->_device->drop();
}
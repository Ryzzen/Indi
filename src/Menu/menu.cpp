/*
** EPITECH PROJECT, 2019
** Indie
** File description:
** menu.cpp
*/

#include "menu.hpp"

MainMenu::Menu::Menu(irr::gui::IGUIEnvironment *guienv):
_guienv(guienv),
_alive(true)
{
    this->_play = this->_guienv->addButton(irr::core::rect<irr::s32>(20, 20, 300, 100), 0, 1, L"PLAY");
    this->_quit = this->_guienv->addButton(irr::core::rect<irr::s32>(20, 120, 300, 200), 0, 2, L"QUIT");
    this->_load = this->_guienv->addButton(irr::core::rect<irr::s32>(20, 220, 300, 300), 0, 3, L"LOAD");
}
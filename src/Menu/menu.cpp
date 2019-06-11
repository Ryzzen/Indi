/*
** EPITECH PROJECT, 2019
** Indie
** File description:
** menu.cpp
*/

#include "menu.hpp"

MainMenu::Menu::Menu(void (&play)(), void (&quit)(), void (&load)(), void (&save)()):
_actualSelection((int)MENU_PLAY),
_play(play),
_quit(quit),
_load(load),
_save(save),
_isAlive(true)
{
    this->_buttons[MENU_PLAY] = "PLAY";
    this->_buttons[MENU_QUIT] = "QUIT";
    this->_buttons[MENU_LOAD] = "LOAD";
    this->_buttons[MENU_SAVE] = "SAVE";
}

void MainMenu::Menu::menuInteraction(std::vector<int> keys)
{
    int up = 0x26;
    int down = 0x28;
    int enter = 0x0D;

    if (std::find(keys.begin(), keys.end(), down) != keys.end())
        this->_actualSelection += 1;
    if (std::find(keys.begin(), keys.end(), up) != keys.end())
        this->_actualSelection -= 1;
    if (this->_actualSelection < MENU_PLAY)
        this->_actualSelection = MENU_SAVE;
    if (this->_actualSelection > MENU_SAVE)
        this->_actualSelection = MENU_PLAY;
    if (std::find(keys.begin(), keys.end(), enter) != keys.end()) {
        switch (this->_actualSelection)
        {
        case MENU_PLAY:
            this->_play();
            break;
        case MENU_QUIT:
            this->_quit();
            break;
        case MENU_LOAD:
            this->_load();
            break;
        case MENU_SAVE:
            this->_save();
            break;
        default:
            break;
        }
        this->_isAlive = false;
    }
}
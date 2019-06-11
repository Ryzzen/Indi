/*
** EPITECH PROJECT, 2019
** Indie
** File description:
** menu.hpp
*/

#ifndef menu
#define menu

#include <vector>
#include <string>
#include <map>
#include <algorithm>

namespace MainMenu {

    enum menuSelection {
        MENU_PLAY,
        MENU_QUIT,
        MENU_LOAD,
        MENU_SAVE
    };

    class Menu {
    private:
        int _actualSelection;
        bool _isAlive;
// Can't be vector-ised because all functions won't have the same prototypes
        void (*_play)();
        void (*_quit)();
        void (*_load)();
        void (*_save)();
        std::map<int, std::string> _buttons;
    public:
#pragma region Constructor / Destructor
        Menu(void (&play)(), void (&quit)(), void (&load)(), void (&save)());
        ~Menu() {}
#pragma endregion
#pragma region Interact
        bool isMenuAlive() {return _isAlive;}
        std::map<int, std::string> getButtons(void) {return this->_buttons;}
        void menuInteraction(std::vector<int> keys);
#pragma endregion
    };
}

#endif /* !menu */
/*
** EPITECH PROJECT, 2019
** Indie
** File description:
** menu.hpp
*/

#ifndef menu
#define menu

#include <irrlicht.h>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

namespace MainMenu {
    class Menu {
    private:
        bool _alive;
        irr::gui::IGUIEnvironment* _guienv;
        irr::gui::IGUIButton *_play;
        irr::gui::IGUIButton *_quit;
        irr::gui::IGUIButton *_load;
    public:
#pragma region Constructor / Destructor
        Menu(irr::gui::IGUIEnvironment* _guienv);
        ~Menu() {}
#pragma endregion
#pragma region Constructor / Destructor
        bool isAlive() {return _alive;}
        bool setAlive(bool b) {_alive = b;}
#pragma endregion
    };
}

#endif /* !menu */
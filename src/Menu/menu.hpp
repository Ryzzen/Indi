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
#include "./../IrrManager/IrrManager.hpp"

class Menu {
    private:
        IrrManager *_irrMgr;
    public:
        Menu(IrrManager *irr, void (*play)(), void (*play2)(), void (*quit)(), void (*load)(), void (*settings)());
        ~Menu();
};

#endif /* !menu */
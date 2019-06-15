/*
** EPITECH PROJECT, 2019
** Indi
** File description:
** Settings.hpp
*/

#ifndef SETTINGS
#define SETTINGS

#include <irrlicht.h>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include "./../IrrManager/IrrManager.hpp"

class Settings {
    private:
        IrrManager *_irrMgr;
    public:
        Settings(IrrManager *irr);
        ~Settings();
};

#endif /* !SETTINGS */
/*
** EPITECH PROJECT, 2019
** Indi
** File description:
** main.cpp
*/

#include <iostream>
#include <vector>
#include <irrlicht.h>
#include "IndiReceiver/IndiReceiver.hpp"
#include "Menu/menu.hpp"
#include "Keyboard/Keyboard.hpp"

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;
using namespace MainMenu;

#ifdef _IRR_WINDOWS_
#pragma comment(lib, "Irrlicht.lib")
#endif

void play(Menu *my_menu)
{
    std::cout << "play" << std::endl;
    my_menu->setAlive(false);
}

void quit()
{
    std::cout << "quit" << std::endl;
    exit(0);
}

void load(Menu *my_menu)
{
    std::cout << "load" << std::endl;
    my_menu->setAlive(false);
}

int main()
{
  IndiReceiver receiver;
    IrrlichtDevice *device =
        createDevice(video::EDT_SOFTWARE, dimension2d<u32>(640, 480), 16,
            false, false, false, &receiver);
    Keyboard kboard(&receiver);

    if (!device)
        return 1;
    device->setWindowCaption(L"Indie Studio");
    IVideoDriver* driver = device->getVideoDriver();
    ISceneManager* smgr = device->getSceneManager();
    IGUIEnvironment* guienv = device->getGUIEnvironment();
    Menu *my_menu = new Menu(guienv);
    receiver.setMenu(my_menu);
    receiver.setPlayFunc(&play);
    receiver.setQuitFunc(&quit);
    receiver.setLoadFunc(&load);
    while (device->run() and my_menu->isAlive())
    {
        driver->beginScene(true, true, SColor(255, 100, 101, 140));
        smgr->drawAll();
        guienv->drawAll();
        driver->endScene();
    }
    device->drop();
    return 0;
}
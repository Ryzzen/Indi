/*
** EPITECH PROJECT, 2019
** Indi
** File description:
** main.cpp
*/

#include <vector>
#include <irrlicht.h>
#include "IndiReceiver/IndiReceiver.hpp"
#include "Menu/menu.hpp"
#include "Keyboard/Keyboard.hpp"
#include "iostream"

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

void test_key(std::vector<int> v)
{
    std::vector<int>::iterator it;

    for (it = v.begin(); it != v.end(); it++) {
        std::cout << *it << std::endl;
    }
}

void play()
{
    std::cout << "play" << std::endl;
}

void quit()
{
    std::cout << "quit" << std::endl;
    exit(0);
}

void load()
{
    std::cout << "load" << std::endl;
}

void save()
{
    std::cout << "save" << std::endl;
}

int main()
{
    Menu my_menu(play, quit, load, save);
    std::map<int, std::string> buttons = my_menu.getButtons();
    std::map<int, std::string>::iterator it;
    int testkey = 0;
    int pos = 10;
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
    for (it = buttons.begin(); it != buttons.end(); it++) {
        guienv->addStaticText(L"test",
            rect<s32>(10, pos += 20, 260, pos + 32), true);
    }
    while (device->run())
    {
        driver->beginScene(true, true, SColor(255, 100, 101, 140));
        smgr->drawAll();
        guienv->drawAll();
        driver->endScene();
        my_menu.menuInteraction(kboard.getTappedKeys());
    }
    device->drop();
    return 0;
}
/*
int game()
{
    IndiReceiver receiver;
    IrrlichtDevice *device =
        createDevice(video::EDT_SOFTWARE, dimension2d<u32>(640, 480), 16,
            false, false, false, &receiver);
    if (!device)
        return 1;
    device->setWindowCaption(L"Hello World! - Irrlicht Engine Demo");
    IVideoDriver* driver = device->getVideoDriver();
    ISceneManager* smgr = device->getSceneManager();
    IGUIEnvironment* guienv = device->getGUIEnvironment();
    guienv->addStaticText(L"Hello World! This is the Irrlicht Software renderer!",
        rect<s32>(10, 10, 260, 22), true);
    IAnimatedMesh* mesh = smgr->getMesh("../media/sydney.md2");
    if (!mesh)
    {
        device->drop();
        return 1;
    }
    IAnimatedMeshSceneNode* node = smgr->addAnimatedMeshSceneNode(mesh);
    if (node)
    {
        node->setMaterialFlag(EMF_LIGHTING, false);
        node->setMD2Animation(scene::EMAT_STAND);
        node->setMaterialTexture(0, driver->getTexture("../media/sydney.bmp"));
    }
    smgr->addCameraSceneNode(0, vector3df(0, 30, -40), vector3df(0, 5, 0));
    while (device->run())
    {
        driver->beginScene(true, true, SColor(255, 100, 101, 140));

        smgr->drawAll();
        guienv->drawAll();

        driver->endScene();
    }
    device->drop();
    return 0;
}*/
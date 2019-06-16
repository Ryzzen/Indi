//
// EPITECH PROJECT, 2019
// indi
// File description:
// 
//

#ifndef INDIRECEIVER_
#define INDIRECEIVER_

#include <vector>
#include <irrlicht.h>
#include <iostream>
#include "./../Menu/menu.hpp"

using namespace irr;

class IndiReceiver : public IEventReceiver {
public:
    IndiReceiver();
    virtual bool OnEvent(const SEvent& event);
    std::vector<int> getPressedKeys(void);
    std::vector<int> getUnpressedKeys(void);
    void setMenu(MainMenu::Menu *my_menu) {this->_menu = my_menu;}
    void setPlayFunc(void *ptr) {this->_playFunc = ptr;}
    void setPlay2Func(void *ptr) {this->_play2Func = ptr;}
    void setQuitFunc(void *ptr) {this->_quitFunc = ptr;}
    void setLoadFunc(void *ptr) {this->_loadFunc = ptr;}
    void setSettingsFunc(void *ptr) {this->_settingsFunc = ptr;}
private:
    MainMenu::Menu *_menu;
    std::vector<bool> keysState_;
    void *_playFunc;
    void *_play2Func;
    void *_quitFunc;
    void *_loadFunc;
    void *_settingsFunc;

    friend class boost::serialization::access;
        template<class Archive>
        void serialize(Archive & ar, const unsigned int version) {
            ar & boost::serialization::base_object<IEventReceiver>(*this);    // sérialisation de la classe mère
            ar & _menu & keysState_ & _playFunc & _play2Func & _quitFunc & _loadFunc & _settingsFunc;   // sérialisation des éléments propres à lobjet courant
        }
};

#endif

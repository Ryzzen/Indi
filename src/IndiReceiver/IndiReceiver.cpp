//
// EPITECH PROJECT, 2019
// Indi
// File description:
// 
//

#include "IndiReceiver.hpp"
using namespace irr;

IndiReceiver::IndiReceiver()
{
    for (int i = 0; i < KEY_KEY_CODES_COUNT + 1; i += 1)
        keysState_.push_back(false);
}

std::vector<int> IndiReceiver::getPressedKeys(void)
{
    std::vector<int> vect;

    for (int i = 0; i < keysState_.size(); i += 1) {
        if (keysState_[i])
            vect.push_back(i);
    }
    return (vect);
}

std::vector<int> IndiReceiver::getUnpressedKeys(void)
{
    std::vector<int> vect;

    for (int i = 0; i < keysState_.size(); i += 1) {
        if (!keysState_[i])
            vect.push_back(i);
    }
    return (vect);
}

bool IndiReceiver::OnEvent(const SEvent& event)
{
    if (event.EventType == irr::EET_KEY_INPUT_EVENT)
    {
        keysState_[event.KeyInput.Key] = event.KeyInput.PressedDown;
        return true;
    }
    if (event.GUIEvent.EventType == irr::gui::EGET_BUTTON_CLICKED)
    {
        s32 id = event.GUIEvent.Caller->getID();
        switch (id)
        {
        case 1:
            this->_playFunc();
            break;
        case 2:
            this->_quitFunc();
            break;
        case 3:
            this->_loadFunc();
            break;
        case 4:
            this->_play2Func();
            break;
        case 5:
            this->_settingsFunc();
            break;
        default:
            break;
        }
    }
    return false;
}
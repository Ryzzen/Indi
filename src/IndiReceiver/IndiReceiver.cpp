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
    void *ptr = NULL;
    void (*ptrF)() = NULL;

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
            ptr = this->_playFunc;
            ptrF = (void (*)())ptr;
            ptrF();
            break;
        case 2:
            ptr = this->_quitFunc;
            ptrF = (void (*)())ptr;
            ptrF();
            break;
        case 3:
            ptr = this->_loadFunc;
            ptrF = (void (*)())ptr;
            ptrF();
            break;
        case 4:
            ptr = this->_play2Func;
            ptrF = (void (*)())ptr;
            ptrF();
            break;
        case 5:
            ptr = this->_settingsFunc;
            ptrF = (void (*)())ptr;
            ptrF();
            break;
        default:
            break;
        }
    }
    return false;
}

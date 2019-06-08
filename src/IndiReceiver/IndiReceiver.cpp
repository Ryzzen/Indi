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
    return false;
}

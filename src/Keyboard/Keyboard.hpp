//
// EPITECH PROJECT, 2019
// indi
// File description:
// 
//

#ifndef KEYBOARD_
#define KEYBOARD_

#include <vector>
#include <irrlicht/irrlicht.h>

#include "../IndiReceiver/IndiReceiver.hpp"

using namespace irr;

class Keyboard {
public:
    Keyboard(IndiReceiver *receiver);
    std::vector<int> getPressedKeys(void);
    std::vector<int> getTappedKeys(void);
private:
    bool isKeyInList(int key, std::vector<int> keys);
    void TapKeys(std::vector<int> keys);
    void UntapKeys(std::vector<int> keys);
    IndiReceiver *receiver_;
    std::vector<int> keysAlreadyPressed_;
};

#endif
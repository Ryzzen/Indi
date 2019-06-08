//
// EPITECH PROJECT, 2019
// Indi
// File description:
// 
//

#include "Keyboard.hpp"

using namespace irr;

Keyboard::Keyboard(IndiReceiver *receiver)
{
    receiver_ = receiver;
}

std::vector<int> Keyboard::getPressedKeys(void)
{
    return (receiver_->getPressedKeys());
}

bool Keyboard::isKeyInList(int key, std::vector<int> keys)
{
    for (int i = 0; i < keys.size(); i += 1) {
        if (keys[i] == key)
            return (true);
    }
    return (false);
}

void Keyboard::TapKeys(std::vector<int> keys)
{
    for (int i = 0; i < keys.size(); i += 1) {
        keysAlreadyPressed_.push_back(keys[i]);
    }
}

void Keyboard::UntapKeys(std::vector<int> keys)
{
    for (int i = 0; i < keysAlreadyPressed_.size(); i += 1) {
        if (isKeyInList(keysAlreadyPressed_[i], keys))
            keysAlreadyPressed_.erase(keysAlreadyPressed_.begin() + i);
    }
}

std::vector<int> Keyboard::getTappedKeys(void)
{
    std::vector<int> vect = receiver_->getPressedKeys();

    UntapKeys(receiver_->getUnpressedKeys());
    for (int i = 0; i < vect.size(); i += 1) {
        if (isKeyInList(vect[i], keysAlreadyPressed_)) {
            vect.erase(vect.begin() + i);
            i = i - 1;
        }
    }
    TapKeys(vect);
    return (vect);
}


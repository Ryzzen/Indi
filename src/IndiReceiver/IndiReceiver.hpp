//
// EPITECH PROJECT, 2019
// indi
// File description:
// 
//

#ifndef INDIRECEIVER_
#define INDIRECEIVER_

#include <vector>
#include <irrlicht/irrlicht.h>

using namespace irr;

class IndiReceiver : public IEventReceiver {
public:
    IndiReceiver();
    virtual bool OnEvent(const SEvent& event);
    std::vector<int> getPressedKeys(void);
    std::vector<int> getUnpressedKeys(void);
private:
    std::vector<bool> keysState_;
};

#endif

/*
** EPITECH PROJECT, 2019
** indi
** File description:
** indi
*/

#ifndef event
    #define event

#include <vector>
#include <string>
#include <map>

namespace Game {

    enum e_action {
    P1_MV_RIGHT,
    P1_MV_LEFT,
    P1_MV_UP,
    P1_MV_DOWN,
    P1_PUT_BOMB,
    P2_MV_RIGHT,
    P2_MV_LEFT,
    P2_MV_UP,
    P2_MV_DOWN,
    P2_PUT_BOMB
    };

    class Event {
    private:
        std::map<e_action, int> keyMap = {
            {P1_MV_RIGHT, 0},
            {P1_MV_LEFT, 0},
            {P1_MV_UP, 0},
            {P1_MV_DOWN, 0},
            {P1_PUT_BOMB, 0},
            {P2_MV_RIGHT, 0},
            {P2_MV_LEFT, 0},
            {P2_MV_UP, 0},
            {P2_MV_DOWN, 0},
            {P2_PUT_BOMB, 0}
        };
    public:
        Event();

        void setAction(e_action action);
        std::vector<e_action> getAction(std::vector<int> kb);
    };
}

#endif /* !event */

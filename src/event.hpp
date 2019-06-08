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
#include <irrlicht.h>

namespace Game {

    enum e_action {
	SELECT,
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
        std::map<e_action, int> _keyMap = {
			{SELECT, irr::KEY_SELECT},
            {P1_MV_RIGHT, irr::KEY_RIGHT},
            {P1_MV_LEFT, irr::KEY_LEFT},
            {P1_MV_UP, irr::KEY_UP},
            {P1_MV_DOWN, irr::KEY_DOWN},
            {P1_PUT_BOMB, irr::KEY_KEY_0},
            {P2_MV_RIGHT, irr::KEY_KEY_D},
            {P2_MV_LEFT, irr::KEY_KEY_Q},
            {P2_MV_UP, irr::KEY_KEY_Z},
            {P2_MV_DOWN, irr::KEY_KEY_S},
            {P2_PUT_BOMB, irr::KEY_SPACE}
        };
		std::map<int, e_action> _keyMapReversed = {
			{irr::KEY_SELECT, SELECT},
			{irr::KEY_RIGHT, P1_MV_RIGHT},
			{irr::KEY_LEFT, P1_MV_LEFT},
			{irr::KEY_UP, P1_MV_UP},
			{irr::KEY_DOWN, P1_MV_DOWN},
			{irr::KEY_KEY_0, P1_PUT_BOMB},
			{irr::KEY_KEY_D, P2_MV_RIGHT},
			{irr::KEY_KEY_Q, P2_MV_LEFT},
			{irr::KEY_KEY_Z, P2_MV_UP},
			{irr::KEY_KEY_S, P2_MV_DOWN},
			{irr::KEY_SPACE, P2_PUT_BOMB}
		};
    public:
        Game::Event();

		void setAction(e_action action, int key) { _keyMap[action] = key; _keyMapReversed[key] = action; }
		e_action getAction(int key) { return _keyMapReversed[key]; }
        std::vector<e_action> getActions(std::vector<int> kb) {
			std::vector<e_action> ret;
			for (auto key : kb)
				ret.push_back(getAction(key));
			return (ret);
		}
    };
}

#endif /* !event */

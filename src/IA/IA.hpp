/*
** EPITECH PROJECT, 2019
** Indi
** File description:
** IA
*/

#ifndef IA_HPP_
#define IA_HPP_

#include "../Bomberman/bomberman.hpp"

namespace Game {
    class IA : public Game::Bomberman {
	    public:
		    IA();
		    ~IA();
            int move();
			int alert();
			void detect_alert();

			int _alert;
			int bomb_dist;
	    protected:
	    private:
    };
}

#endif /* !IA_HPP_ */

//std::vector<std::vector<Game::Ground>> getMap() -> map
//
//std::string getTypeById(unsigned int id) -> ID -> Type
//in map: _object qui est une list ID
/*
** EPITECH PROJECT, 2019
** Indie
** File description:
** menu.hpp
*/

#ifndef menu
#define menu

#include <irrlicht.h>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

namespace MainMenu {
    class Menu {
    private:
        bool _alive;
        irr::gui::IGUIEnvironment* _guienv;
        irr::gui::IGUIButton *_play;
        irr::gui::IGUIButton *_quit;
        irr::gui::IGUIButton *_load;

        friend class boost::serialization::access;
        template<class Archive>
        void serialize(Archive &ar, const unsigned int version) {
            ar & _guienv & _play & _quit & _load;
        }
    public:
#pragma region Constructor / Destructor
        Menu(void);
        Menu(irr::gui::IGUIEnvironment* _guienv);
        ~Menu() {}
#pragma endregion
#pragma region Alive
        bool isAlive() {return _alive;}
        bool setAlive(bool b) {_alive = b;}
#pragma endregion
#pragma region Setters
        void setGuienv(irr::gui::IGUIEnvironment* _guienv);
#pragma endregion
#pragma region GameLoop
        void menuLoop();
#pragma endregion
    };
}

#endif /* !menu */
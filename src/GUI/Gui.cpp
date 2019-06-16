/*
** EPITECH PROJECT, 2019
** indi
** File description:
** indi
*/

#include "Gui.hpp"

void display_GUI(int x, int y, IGUIEnvironment* env, video::IVideoDriver* driver, Game::Bomberman *obj)
{
	int bombs = 0;
    if (obj->_bombs.size() > 0) {
		std::wstring tmp = (L"x0");
		for (int i = 0; obj->_bombs[i]; i++)
			if (obj->_bombs[i] == true)
				bombs++;
		tmp[0] = bombs + 48;
		const wchar_t* szTmp = tmp.c_str();
		env->addImage(driver->getTexture("../../media/Bomb.png"), position2d<int>(x, y));
		env->addStaticText(L"x3", rect<s32>(x + 50,y + 30,x + 70,y + 50), false);
    }
    if (obj->_bombs.size() - 1 > 0) {
		std::wstring tmp = (L"x0");
		tmp[1] = obj->_bombs.size() + 47;
		const wchar_t* szTmp = tmp.c_str();
		env->addStaticText(szTmp, rect<s32>(x + 50,y + 80,x + 170,y + 100), false);
		env->addImage(driver->getTexture("../../media/bombPowUP.png"), position2d<int>(x, y + 50));
	}

	tmp[1] = 1 + 48;
	const wchar_t* szTmp = tmp.c_str();
	env->addStaticText(szTmp, rect<s32>(x + 50,y + 130,x + 170,y + 150), false);
	env->addImage(driver->getTexture("../../media/speedPowUP.png"), position2d<int>(x, y + 100));

	if (obj->_firePower - 1 != 0) {
		tmp[1] = obj->_firePower + 47;
		const wchar_t* szTmp = tmp.c_str();
		env->addStaticText(szTmp, rect<s32>(x + 50,y + 180,x + 170,y + 200), false);
		env->addImage(driver->getTexture("../../media/rangePowUP.png"), position2d<int>(x, y + 150));
	}
	if (obj->_softBlockPass == true)
		env->addImage(driver->getTexture("../../media/wallPassPowUP.png"), position2d<int>(x, y + 200));
}

void FunctionCoreGUI(IGUIEnvironment* env, video::IVideoDriver* driver)
{
	std::vector<unsigned int> vecid = Game::scene.getIdsByType(Game::P1);
	vecid += scene.getIdsByType(Game::P2);
	vecid += scene.getIdsByType(Game::P3);
	vecid += scene.getIdsByType(Game::P4);

    Game::Bomberman *player1 = static_cast<Bomberman*>(Game::scene.getObjectById(vecid[0]).get());
    Game::Bomberman *player2 = static_cast<Bomberman*>(Game::scene.getObjectById(vecid[1]).get());
    Game::Bomberman *player3 = static_cast<Bomberman*>(Game::scene.getObjectById(vecid[2]).get());
    Game::Bomberman *player4 = static_cast<Bomberman*>(Game::scene.getObjectById(vecid[3]).get());

    if (player1 != NULL)
		display_GUI(10, 10, env, driver, player1);
    if (player2 != NULL)
		display_GUI(1830, 20, env, driver, player2);
    if (player3 != NULL)
        display_GUI(10, 720, env, driver, player3);
    if (player4 != NULL)
        display_GUI(1830, 720, env, driver, player4);
}

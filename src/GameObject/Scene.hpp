/*
** EPITECH PROJECT, 2019
** indi
** File description:
** indi
*/

#ifndef SCENE
	#define SCENE

#include <vector>
#include <string>
#include <list>
#include <map>
#include <memory>
#include <random>
#include <limits>
#include "../event.hpp"
#include "gameObject.hpp"

namespace Game {

	typedef void (*objectActionFunction)();

	Game::Scene scene = Game::Scene();

	class Ground {
	public:
		std::list<unsigned int> _objects;

		Ground() {}
		Ground(std::list<unsigned int> objects)
			: _objects(objects)
		{}
		Ground(unsigned int object)
			: _objects(std::list<unsigned int>(1, object))
		{}

		void addObject(unsigned int id) { _objects.push_back(id); }
		void removeObject(unsigned int id) { _objects.remove(id); }
	};

	class Scene {
	public:
		Scene(std::vector<Game::GameObject> objects = std::vector<Game::GameObject>(), unsigned int width = 15, unsigned int height = 15)
		{
			_map = std::vector<std::vector<Ground>>(height, std::vector<Ground>(width, Ground()));

			for (auto object : objects)
				addObject(object);

			_width = width;
			_height = height;
		}

		void addObject(Game::GameObject object)
		{
			unsigned int id = getUniqueId();
			_gameObjetcs[id] = std::make_unique<Game::GameObject>(object);
			_gameObjetcs[id]->_id = id;
			_map[static_cast<unsigned int>(_gameObjetcs[id]->_position.second)][static_cast<unsigned int>(_gameObjetcs[id]->_position.first)].addObject(id);
		}
		void removeObject(unsigned int id)
		{
			if (!_gameObjetcs[id])
				return;
			_map[static_cast<unsigned int>(_gameObjetcs[id]->_position.second)][static_cast<unsigned int>(_gameObjetcs[id]->_position.first)].removeObject(id);
			_gameObjetcs.erase(id);
		}
		std::unique_ptr<Game::GameObject> &getObjectById(unsigned int id) { return (_gameObjetcs[id]); }

		void moveObject(unsigned int id, std::pair<float, float> offset);
		std::vector<unsigned int> getPosistionObjectsIds(std::pair<float, float> position) const;
		std::vector<std::string> getPosistionObjectsTypes(std::pair<float, float> position);

		void update();

		void takeAction(Game::e_action action);
		void subscribeToAction(Game::e_action action, Game::objectActionFunction f);

	private:
		std::map<unsigned int, std::unique_ptr<Game::GameObject>> _gameObjetcs;
		std::vector<std::vector<Game::Ground>> _map;
		std::map<Game::e_action, objectActionFunction> _actionHandler;
		unsigned int _width;
		unsigned int _height;

		unsigned int getUniqueId();
	};


}

#endif /* !SCENE */
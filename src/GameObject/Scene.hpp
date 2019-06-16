/*
** EPITECH PROJECT, 2019
** indi
** File description:
** indi
*/

#ifndef SCENE
    #define SCENE


#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <list>
#include <map>
#include <memory>
#include <random>
#include <limits>
#include <functional>
#include <algorithm>
#include "../event.hpp"
#include "GameObject.hpp"


namespace Game {

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
                addObject(std::make_unique<Game::GameObject>(object));

            _width = width;
            _height = height;
        }
        void cleanScene() {
            for (auto &object : _gameObjetcs)
				object.second.reset();
        }
		//~Scene()
		//{
		//}

        std::vector<std::vector<Game::Ground>> getMap() { return (_map); }
        std::vector<Game::GameObject> getGameObjects()
        {
            std::vector<Game::GameObject> gameObjects;
            for (auto const &object : _gameObjetcs)
                gameObjects.push_back(*(object.second.get()));
        }
		unsigned int addObject(std::unique_ptr<Game::GameObject> object)
        {
            unsigned int id = getUniqueId();
            _gameObjetcs[id] = move(object);
            _gameObjetcs[id]->_id = id;
            _map[static_cast<unsigned int>(_gameObjetcs[id]->_position.second)][static_cast<unsigned int>(_gameObjetcs[id]->_position.first)].addObject(id);
			return (id);
        }
		void removeObject(unsigned int id)
        {
            if (!_gameObjetcs[id])
                return;
            _map[static_cast<unsigned int>(_gameObjetcs[id]->_position.second)][static_cast<unsigned int>(_gameObjetcs[id]->_position.first)].removeObject(id);
            _gameObjetcs.erase(id);
        }
        std::unique_ptr<Game::GameObject> &getObjectById(unsigned int id) { return (_gameObjetcs[id]); }

        std::string getTypeById(unsigned int id) { return (_gameObjetcs[id]->_type); }
        void moveObject(unsigned int id, float offset_x, float offset_y);
        std::vector<unsigned int> getIdsByType(std::string type);
        std::vector<unsigned int> getPosistionObjectsIds(float x, float y) const;
        std::vector<std::string> getPosistionObjectsTypes(float x, float y);

        void update();

        void takeAction(Game::e_action action);
        void subscribeToAction(Game::e_action action, std::function<void()> f);
        void unsubscribeToAction(Game::e_action action);

    private:
        std::map<unsigned int, std::unique_ptr<Game::GameObject>> _gameObjetcs;
        std::vector<std::vector<Game::Ground>> _map;
        std::map<Game::e_action, std::function<void()>> _actionHandler;
        unsigned int _width;
        unsigned int _height;

        unsigned int getUniqueId();
    };

    extern Game::Scene scene;
}

#endif /* !SCENE */
/*
** EPITECH PROJECT, 2019
** Indi
** File description:
** IA
*/

#include "IA.hpp"

IA::IA()
{
    this._alert = 0;
    this.bomb_dist = 0;
}

IA::~IA()
{
}

int IA::alert()
{
    if (my_x != 0 && scene.getPosistionObjectsIds(my_x -1, my_y).size() == 0) {
        this._alert += 1;
        moveUp();
    } else if (my_x != 0 && scene.getPosistionObjectsIds(my_x, my_y - 1).size() == 0) {
        this._alert += 1;
        moveLeft();
    } else if (my_x != 0 && scene.getPosistionObjectsIds(my_x -1, my_y).size() == 0) {
        this._alert += 1;
        moveRight();
    } else if (my_x != 0 && scene.getPosistionObjectsIds(my_x -1, my_y).size() == 0) {
        this._alert += 1;
        moveDown();
    }
}

void IA::detect_alert()
{
    if (my_x != 0 && scene.getPosistionObjectsTypes(my_x -1, my_y).size() == BOMB) {
        this._alert = 1;
    } else if (my_x != 0 && scene.getPosistionObjectsTypes(my_x, my_y - 1).size() == BOMB) {
        this._alert = 1;
    } else if (my_x != 0 && scene.getPosistionObjectsTypes(my_x -1, my_y).size() == BOMB) {
        this._alert = 1;
    } else if (my_x != 0 && scene.getPosistionObjectsTypes(my_x -1, my_y).size() == BOMB) {
        this.alert = 1;
    }
}

int IA::move()
{
    float my_x = _position.first;
    float my_y = _position.seconde;
    std::vector<std::vector<Game::Ground>> actual_map = Game::scene.getMap();

    this.detect_alert();
    if (this._alert == 8)
        this._alert = 0;
    if (this._alert != 0)
        this.alert();
    if (this.bomb_dist == 15) {
        this.bomb_dist = 0;
        this.putBomb();
        this.alert = 1;
    }
    if (my_x != 0 && scene.getPosistionObjectsIds(my_x -1, my_y).size() == 0) {
        moveUp();
    } else if (my_x != 0 && scene.getPosistionObjectsIds(my_x, my_y - 1).size() == 0) {
        moveLeft();
    } else if (my_x != 0 && scene.getPosistionObjectsIds(my_x -1, my_y).size() == 0) {
        moveRight();
    } else if (my_x != 0 && scene.getPosistionObjectsIds(my_x -1, my_y).size() == 0) {
        moveDown();
    }
}
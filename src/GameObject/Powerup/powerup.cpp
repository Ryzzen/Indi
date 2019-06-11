/*
** EPITECH PROJECT, 2019
** Indi
** File description:
** powerup
*/

#include "powerup.hpp"

void powerup::applyPowerup(Bomberman &bomberman)
{
    bomberman._speed += this->_valueSpeed;
    bomberman._firePower += this->_valueFire;
    bomberman._bombs += this->_valueBombs;
    delete this;
}
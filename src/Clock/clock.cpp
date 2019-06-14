/*
** EPITECH PROJECT, 2019
** Indi
** File description:
** clock.cpp
*/

#include "clock.hpp"

Clock::Clock():
_isPaused(false)
{
    this->_clock = std::clock();
    this->_timer = 0;
}

Clock::~Clock()
{
}

void Clock::startClock()
{
    this->_clock = std::clock();
    this->_timer = 0;
}

void Clock::resetClock()
{
    this->_clock = std::clock();
    this->_timer = 0;
}

double Clock::getClockTimer()
{
    if ((std::clock() - this->_clock) / (double)CLOCKS_PER_SEC < 0.2)
        return this->_timer;
    this->_timer += (std::clock() - this->_clock) / (double)CLOCKS_PER_SEC;
    this->_clock = std::clock();
    return this->_timer;
}

void Clock::pauseClock()
{
    if (!this->_isPaused) {
        this->_isPaused = true;
        this->_timer += (std::clock() - this->_clock) / (double)CLOCKS_PER_SEC;
    }
}

void Clock::resumeClock()
{
    if (this->_isPaused) {
        this->_isPaused = false;
        this->_clock = std::clock();
    }
}
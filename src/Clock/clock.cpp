/*
** EPITECH PROJECT, 2019
** Indi
** File description:
** clock.cpp
*/

#include "clock.hpp"

Game::Clock::Clock():
_isPaused(false)
{
    this->_clock = std::clock();
    this->_timer = 0;
}

Game::Clock::~Clock()
{
}

void Game::Clock::startClock()
{
    this->_clock = std::clock();
    this->_timer = 0;
}

void Game::Clock::resetClock()
{
    this->_clock = std::clock();
    this->_timer = 0;
}

double Game::Clock::getClockTimer()
{
    if ((std::clock() - this->_clock) / (double)CLOCKS_PER_SEC < 0.2)
        return this->_timer;
    this->_timer += (std::clock() - this->_clock) / (double)CLOCKS_PER_SEC;
    this->_clock = std::clock();
    return this->_timer;
}

void Game::Clock::pauseClock()
{
    if (!this->_isPaused) {
        this->_isPaused = true;
        this->_timer += (std::clock() - this->_clock) / (double)CLOCKS_PER_SEC;
    }
}

void Game::Clock::resumeClock()
{
    if (this->_isPaused) {
        this->_isPaused = false;
        this->_clock = std::clock();
    }
}
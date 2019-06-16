/*
** EPITECH PROJECT, 2019
** Indi
** File description:
** Clock.hpp
*/

#ifndef CLOCK
#define CLOCK

#include <iostream>
#include <cstdio>
#include <ctime>

namespace Game {
    class Clock {
    public:
        Clock();
        ~Clock();
        void startClock();
        void resetClock();
        void pauseClock();
        void resumeClock();
        double getClockTimer();
        bool isPaused() {return this->_isPaused;}
    private:
        std::clock_t _clock;
        double _timer;
        bool _isPaused;

        friend class boost::serialization::access;
        template<class Archive>
        void serialize(Archive &ar, const unsigned int version) {
            ar & _clock & _timer & _isPaused;
        }
    };
}

#endif /* !CLOCK */
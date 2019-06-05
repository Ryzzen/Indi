/*
** EPITECH PROJECT, 2019
** indi
** File description:
** indi
*/

#include <vector>
#include <string>

#ifndef system
    #define system

namespace System {

    std::string os; //le faire en lambda

    std::vector<int> getKeyboardInput();

    void write(std::string msg);

    std::string read();
}

#endif /* !system */
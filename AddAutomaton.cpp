//
// Created by bdesp on 5/2/2021.
//
#include "AddAutomaton.h"
void AddAutomaton::S0(const std::string &input)
{
    if(input[index] == '+')
    {
        inputRead = 1;
    }
    else
    {
        Serr();
    }
}

//
// Created by bdesp on 5/2/2021.
//
#include "QuestionMarkAutomaton.h"
void QuestionMarkAutomaton::S0(const std::string &input)
{
    if(input[index] == '?')
    {
        inputRead = 1;
    }
    else
    {
        Serr();
    }

}

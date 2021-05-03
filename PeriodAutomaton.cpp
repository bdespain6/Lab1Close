//
// Created by bdesp on 5/2/2021.
//
#include "PeriodAutomaton.h"
void PeriodAutomaton::S0(const std::string &input) {
    if(input[0] == '.')
    {
        inputRead = 1;
    }
    else{
        Serr();
    }
}

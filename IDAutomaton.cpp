//
// Created by bdesp on 5/2/2021.
//
#include "IDAutomaton.h"
#include <cctype>
    void IDAutomaton::S0(const std::string &input)
    {
        if(isalpha(input[index]))
        {
            inputRead++;
            index++;
            S1(input);
        }
        else
        {
            Serr();
        }
    }
    void IDAutomaton::S1(const std::string &input)
    {
        if(isalnum(input[index])||input[index] == '_')
        {
            inputRead++;
            index++;
            if(isspace(input[index]))
            {
                S2(input);
            }
           else
           {
                S1(input);
            }
        }
        else
        {
            S2(input);
        }
    }
    void IDAutomaton::S2(const std::string &input)
    {

        index++;
    }
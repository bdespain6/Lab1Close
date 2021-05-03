//
// Created by bdesp on 5/2/2021.
//
//
// Created by bdesp on 5/2/2021.
//

//
// Created by bdesp on 5/2/2021.
//
#include "RulesAutomaton.h"
void RulesAutomaton::S0(const std::string &input)
{
    if(input[index] == 'R')
    {
        index++;
        inputRead++;
        S1(input);
    }
    else{
        Serr();
    }
}
void RulesAutomaton::S1(const std::string &input)
{
    if(input[index] == 'u')
    {
        index++;
        inputRead++;
        S2(input);
    }
    else
    {
        Serr();
    }
}
void RulesAutomaton::S2(const std::string &input)
{
    if(input[index] == 'l')
    {
        index++;
        inputRead++;
        s3(input);
    }
    else
    {
        Serr();
    }
}
void RulesAutomaton::s3(const std::string &input)
{
    if(input[index] == 'e')
    {
        index++;
        inputRead++;
        s4(input);
    }
    else
    {
        Serr();
    }
}
void RulesAutomaton::s4(const std::string &input)
{
    if(input[index] == 's')
    {
        index++;
        inputRead++;
    }
    else
    {
        Serr();
    }
}


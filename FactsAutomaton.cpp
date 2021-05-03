//
// Created by bdesp on 5/2/2021.
//

//
// Created by bdesp on 5/2/2021.
//
#include "FactsAutomaton.h"
void FactsAutomaton::S0(const std::string &input)
{
    if(input[index] == 'F')
    {
        index++;
        inputRead++;
        S1(input);
    }
    else{
        Serr();
    }
}
void FactsAutomaton::S1(const std::string &input)
{
    if(input[index] == 'a')
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
void FactsAutomaton::S2(const std::string &input)
{
    if(input[index] == 'c')
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
void FactsAutomaton::s3(const std::string &input)
{
    if(input[index] == 't')
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
void FactsAutomaton::s4(const std::string &input)
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

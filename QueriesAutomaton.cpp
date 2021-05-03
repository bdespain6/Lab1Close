//
// Created by bdesp on 5/2/2021.
//

//
// Created by bdesp on 5/2/2021.
//
#include "QueriesAutomaton.h"
void QueriesAutomaton::S0(const std::string &input)
{
    if(input[index] == 'Q')
    {
        index++;
        inputRead++;
        S1(input);
    }
    else{
        Serr();
    }
}
void QueriesAutomaton::S1(const std::string &input)
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
void QueriesAutomaton::S2(const std::string &input)
{
    if(input[index] == 'e')
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
void QueriesAutomaton::s3(const std::string &input)
{
    if(input[index] == 'r')
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
void QueriesAutomaton::s4(const std::string &input)
{
    if(input[index] == 'i')
    {
        index++;
        inputRead++;
        s5(input);
    }
    else
    {
        Serr();
    }
}
void QueriesAutomaton::s5(const std::string &input)
{
    if(input[index] == 'e')
    {
        index++;
        inputRead++;
        s6(input);
    }
    else
    {
        Serr();
    }
}
void QueriesAutomaton::s6(const std::string &input)
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
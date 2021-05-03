//
// Created by bdesp on 5/2/2021.
//
#include "StringAutomaton.h"
#include <cctype>
void StringAutomaton::S0(const std::string &input)
{
    if(input[index] == '\'')
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
void StringAutomaton::S1(const std::string &input)
{
    if((unsigned)index == input.size() - 1)
    {
        S3(input);
    }
    else if(input[index]!='\'')
    {
        if(input[index] == '\n')
        {
            newLines++;
        }
        inputRead++;
        index++;
        S1(input);
    }
    else
        {
        index++;
        inputRead++;
        S2(input);
        }
}
void StringAutomaton::S2(const std::string &input)
{
    if(input[index]=='\'')
    {
        inputRead++;
        index++;
        S1(input);
    }
    else
    {
        index = index;
    }
}
void StringAutomaton::S3(const std::string &input)
{
    type = TokenType::UNDEFINED;
}
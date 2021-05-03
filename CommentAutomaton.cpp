//
// Created by bdesp on 5/2/2021.
//
#include "CommentAutomaton.h"
void CommentAutomaton::S0(const std::string &input)
{
    if(input[index] =='#')
    {
        index++;
        inputRead++;
        S1(input);
    }
    else
    {
        Serr();
    }
}
void CommentAutomaton::S1(const std::string &input)
{
    if(input[index] == '|')
    {
        index++;
        inputRead++;
        S3(input);
    }
    else if(input[index] == '\n')
    {
        inputRead++;
    }
    else{
        index++;
        inputRead++;
        S2(input);
    }
}
void CommentAutomaton::S2(const std::string &input)
{
    if(input[index] != '\n')
    {
        index++;
        inputRead++;
        S2(input);
    }
    else
    {
        inputRead = inputRead;
    }
}
void CommentAutomaton::S3(const std::string &input)
{
    if((unsigned) index == input.size()-1)
    {
        S5(input);
    }
    else if(input[index]!= '|')
    {
        if(input[index] == '\n')
        {
            newLines++;
        }
        index++;
        inputRead++;
        S3(input);
    }
    else
    {
        index++;
        inputRead++;
        S4(input);
    }
}
void CommentAutomaton::S4(const std::string &input)
{

    if((unsigned)index == input.size()-1)
    {
        S5(input);
    }
    else if(input[index] == '#')
    {
        inputRead++;
    }
    else
    {
        inputRead++;
        index++;
        S3(input);
    }
}
void CommentAutomaton::S5(const std::string &input)
{
    type = TokenType::UNDEFINED;
}


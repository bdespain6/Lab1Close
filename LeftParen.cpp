//
// Created by bdesp on 5/2/2021.
//
#include "LeftParen.h"
    void LeftParen::S0(const std::string &input)
    {
        if(input[0] == '(')
        {
            inputRead = 1;
        }
        else
        {
            Serr();
        }
    }
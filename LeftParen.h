//
// Created by bdesp on 5/2/2021.
//

#ifndef UNTITLED4_LEFTPAREN_H
#define UNTITLED4_LEFTPAREN_H
#include "Automaton.h"
class LeftParen : public Automaton
{
    public:
        LeftParen(): Automaton(TokenType::LEFT_PAREN){}

        void S0(const std::string &input);
};

#endif //UNTITLED4_LEFTPAREN_H

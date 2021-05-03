//
// Created by bdesp on 5/2/2021.
//

#ifndef RIGHTPAREN_H
#define RIGHTPAREN_H
#include "Automaton.h"
class RightParen : public Automaton
{
public:
    RightParen(): Automaton(TokenType::RIGHT_PAREN){}

    void S0(const std::string &input);
};



#endif //UNTITLED4_RIGHTPAREN_H

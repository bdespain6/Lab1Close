//
// Created by bdesp on 5/2/2021.
//

#ifndef UNDEFINED_H
#define UNDEFINED_H


#include "Automaton.h"

class UndefinedAutomaton : public Automaton
{
public:
    UndefinedAutomaton() : Automaton(TokenType::UNDEFINED) {}  // Call the base constructor

    void S0(const std::string& input);
};


#endif //UNDEFINED_H

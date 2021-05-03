//
// Created by bdesp on 5/2/2021.
//

#ifndef ADDAUTOMATON_H
#define ADDAUTOMATON_H


#include "Automaton.h"
class AddAutomaton : public Automaton
{
public:
    AddAutomaton(): Automaton(TokenType::ADD){}

    void S0(const std::string &input);
};

#endif //UNTITLED4_ADDAUTOMATON_H

//
// Created by bdesp on 5/2/2021.
//

#ifndef UNTITLED4_MULTIPLYAUTOMATON_H
#define UNTITLED4_MULTIPLYAUTOMATON_H

#include "Automaton.h"
class MultiplyAutomaton : public Automaton
{
public:
    MultiplyAutomaton(): Automaton(TokenType::MULTIPLY){}

    void S0(const std::string &input);
};

#endif //UNTITLED4_MULTIPLYAUTOMATON_H

//
// Created by bdesp on 5/2/2021.
//

#ifndef UNTITLED4_COMMAAUTOMATON_H
#define UNTITLED4_COMMAAUTOMATON_H
#include "Automaton.h"
class CommaAutomaton : public Automaton
{
    public:
    CommaAutomaton() : Automaton(TokenType::COMMA) {}  // Call the base constructor

    void S0(const std::string& input);
};
#endif //UNTITLED4_COMMAAUTOMATON_H

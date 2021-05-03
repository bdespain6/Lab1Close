//
// Created by bdesp on 5/2/2021.
//

#ifndef UNTITLED4_IDAutomaton_H
#define UNTITLED4_IDAutomaton_H
#include "Automaton.h"
class IDAutomaton : public Automaton
{
public:
    IDAutomaton() : Automaton(TokenType::ID){}
    void S0(const std::string &input);
    void S1(const std::string &input);
    void S2(const std::string &input);
};
#endif //UNTITLED4_IDAutomaton_H

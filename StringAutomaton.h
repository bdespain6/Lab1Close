//
// Created by bdesp on 5/2/2021.
//

#ifndef UNTITLED4_StringAutomaton_H
#define UNTITLED4_StringAutomaton_H
#include "Automaton.h"
class StringAutomaton : public Automaton
{
public:
    StringAutomaton() : Automaton(TokenType::STRING){}
    void S0(const std::string &input);
    void S1(const std::string &input);
    void S2(const std::string &input);
    void S3(const std::string &input);
};
#endif //UNTITLED4_StringAutomaton_H

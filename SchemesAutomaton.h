//
// Created by bdesp on 5/2/2021.
//

#ifndef UNTITLED4_SCHEMESAUTOMATON_H
#define UNTITLED4_SCHEMESAUTOMATON_H

#include "Automaton.h"
class SchemesAutomaton : public Automaton
{
public:
    SchemesAutomaton(): Automaton(TokenType::SCHEMES){}

    void S0(const std::string &input);
    void S1(const std::string &input);
    void S2(const std::string &input);
    void s3(const std::string &input);
    void s4(const std::string &input);
    void s5(const std::string &input);
    void s6(const std::string &input);
};



#endif //UNTITLED4_SCHEMESAUTOMATON_H

//
// Created by bdesp on 5/2/2021.
//

#ifndef UNTITLED4_FACTSAUTOMATON_H
#define UNTITLED4_FACTSAUTOMATON_H
//
// Created by bdesp on 5/2/2021.
//

#include "Automaton.h"
class FactsAutomaton : public Automaton
{
public:
    FactsAutomaton(): Automaton(TokenType::FACTS){}

    void S0(const std::string &input);
    void S1(const std::string &input);
    void S2(const std::string &input);
    void s3(const std::string &input);
    void s4(const std::string &input);

};

#endif //UNTITLED4_FACTSAUTOMATON_H

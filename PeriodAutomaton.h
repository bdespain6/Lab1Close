//
// Created by bdesp on 5/2/2021.
//

#ifndef PERIODAUTOMATON_H
#define PERIODAUTOMATON_H
#include "Automaton.h"

class PeriodAutomaton : public Automaton
{
public:
    PeriodAutomaton() : Automaton(TokenType::PERIOD) {}  // Call the base constructor

    void S0(const std::string& input);
};




#endif //PERIODAUTOMATON_H

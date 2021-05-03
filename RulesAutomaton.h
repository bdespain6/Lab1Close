
#ifndef RulesAutomaton_H
#define RulesAutomaton_H
//
// Created by bdesp on 5/2/2021.
//

#include "Automaton.h"
class RulesAutomaton : public Automaton
{
public:
    RulesAutomaton(): Automaton(TokenType::RULES){}

    void S0(const std::string &input);
    void S1(const std::string &input);
    void S2(const std::string &input);
    void s3(const std::string &input);
    void s4(const std::string &input);

};

#endif //UNTITLED4_RulesAutomaton_H



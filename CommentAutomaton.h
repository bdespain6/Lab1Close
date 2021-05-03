//
// Created by bdesp on 5/2/2021.
//

#ifndef UNTITLED4_CommentAutomaton_H
#define UNTITLED4_CommentAutomaton_H
#include "Automaton.h"
class CommentAutomaton : public Automaton
{
public:
    CommentAutomaton() : Automaton(TokenType::COMMENT){}
    void S0(const std::string &input);
    void S1(const std::string &input);
    void S2(const std::string &input);
    void S3(const std::string &input);
    void S4(const std::string &input);
    void S5(const std::string &input);
};
#endif //UNTITLED4_CommentAutomaton_H

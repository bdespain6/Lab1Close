//
// Created by bdesp on 5/2/2021.
//

#ifndef UNTITLED4_QUESTIONMARKAUTOMATON_H
#define UNTITLED4_QUESTIONMARKAUTOMATON_H
#include "Automaton.h"
class QuestionMarkAutomaton : public Automaton
        {
        public:
            QuestionMarkAutomaton() : Automaton(TokenType::Q_MARK){}
            void S0(const std::string &input);
        };
#endif //UNTITLED4_QUESTIONMARKAUTOMATON_H

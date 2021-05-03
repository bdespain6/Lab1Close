//
// Created by bdesp on 5/2/2021.
//
#include "SchemesAutomaton.h"
    void SchemesAutomaton::S0(const std::string &input)
    {
        if(input[index] == 'S')
        {
            index++;
            inputRead++;
            S1(input);
        }
        else{
            Serr();
        }
    }
    void SchemesAutomaton::S1(const std::string &input)
    {
        if(input[index] == 'c')
        {
            index++;
            inputRead++;
            S2(input);
        }
        else
        {
            Serr();
        }
    }
    void SchemesAutomaton::S2(const std::string &input)
    {
        if(input[index] == 'h')
        {
            index++;
            inputRead++;
            s3(input);
        }
        else
        {
            Serr();
        }
    }
    void SchemesAutomaton::s3(const std::string &input)
    {
        if(input[index] == 'e')
        {
            index++;
            inputRead++;
            s4(input);
        }
        else
        {
            Serr();
        }
    }
    void SchemesAutomaton::s4(const std::string &input)
    {
        if(input[index] == 'm')
        {
            index++;
            inputRead++;
            s5(input);
        }
        else
        {
            Serr();
        }
    }
    void SchemesAutomaton::s5(const std::string &input)
    {
        if(input[index] == 'e')
        {
            index++;
            inputRead++;
            s6(input);
        }
        else
        {
            Serr();
        }
    }
    void SchemesAutomaton::s6(const std::string &input)
    {
        if(input[index] == 's')
        {
            index++;
            inputRead++;
        }
        else
        {
            Serr();
        }
    }
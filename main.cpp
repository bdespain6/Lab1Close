#include "Lexer.h"
#include <iostream>
#include <string>
#include <vector>
#include<fstream>
#include <sstream>

using namespace std;
int main(int argc, char** argv) {
    string fileName = argv[1];
    cout << argv[1] << " is argv[1]\n";
     ifstream input(fileName);
     if(!input.is_open())
     {
         cout << "This failed\n";
     }
     string inputReadout = "";
    stringstream inputString;
     while(getline(input,inputReadout) )
     {
         inputString << inputReadout << endl;
     }
     //cout << inputString.str();
     inputReadout = inputString.str();
    // cout << inputReadout;
    /*if (!input.is_open()) {
        cout << "File " << fileName << " could not be found or opened." << endl;
        return 1;
    }*/
    Lexer* lexer = new Lexer();

    // TODO
    lexer->Run(inputReadout);
    delete lexer;

    return 0;
}
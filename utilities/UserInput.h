#ifndef USERINPUT_H
#define USERINPUT_H

#include <fstream>
#include <string>

using namespace std;

class UserInput
{
public:
    UserInput() {};
    string readString();
    int readInt();
    double readDouble();
    char readChar();  
    string readString(const char *);
    int readInt(const char *);
    double readDouble(const char *);
    char readChar(const char *);
};

#endif

#ifndef HELPER_H
#define HELPER_H

#include <string>
#include <vector>

using namespace std;

string trim(const string &s);
vector<string> split(const string& str, char ch);
void splitA(const string& str, char ch, string tokens[], int size);

#endif

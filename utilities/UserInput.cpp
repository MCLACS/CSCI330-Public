#include "UserInput.h"
#include <iostream>
#include <string>

using namespace std;

void checkForError()
{
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(10000, '\n');
		throw "Error: Invalid user input!";
	}
}

string UserInput::readString()
{
	return readString("");
}

int UserInput::readInt()
{
	return readInt("");
}

double UserInput::readDouble()
{
	return readDouble("");
}

char UserInput::readChar()
{
	return readChar("");
}


string UserInput::readString(const char * prompt)
{
  string s;
  cout << prompt;
  getline(cin, s);
  checkForError();
  return s;
}

int UserInput::readInt(const char * prompt)
{
  int i(0);
  cout << prompt;
  cin >> i;
  checkForError();
  return i;
}

double UserInput::readDouble(const char * prompt)
{
  double d(0);
  cout << prompt;
  cin >> d;
  checkForError();
  return d;
}

char UserInput::readChar(const char * prompt)
{
  char ch(0);
  cout << prompt;
  cin >> ch;
  checkForError();
  return ch;
}

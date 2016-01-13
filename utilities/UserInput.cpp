#include "UserInput.h"
#include <iostream>
#include <string>

using namespace std;

void checkForError()
{
	if (cin.fail())
	{
		cin.clear();
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
  cin.ignore(1000, '\n');
  checkForError();
  return i;
}

double UserInput::readDouble(const char * prompt)
{
  double d(0);
  cout << prompt;
  cin >> d;
  cin.ignore(1000, '\n');
  checkForError();
  return d;
}

char UserInput::readChar(const char * prompt)
{
  char ch(0);
  cout << prompt;
  cin >> ch;
  cin.ignore(1000, '\n');
  checkForError();
  return ch;
}

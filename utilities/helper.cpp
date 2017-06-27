#include "helper.h"

#include <string>
#include <vector>

using namespace std;

string trim(const string &s)
{
    string::const_iterator it = s.begin();
    while (it != s.end() && isspace(*it))
        it++;

    string::const_reverse_iterator rit = s.rbegin();
    while (rit.base() != it && isspace(*rit))
        rit++;

    return string(it, rit.base());
}

vector<string> split(const string& str, char ch)
{
  vector<string> ret;
  string temp;
  for (string::const_iterator it = str.begin(); it != str.end(); it++)
  {
    if (*it != ch)
    {
      temp += *it;
    }
    else
    {
      ret.push_back(trim(temp));
      temp = "";
    }
  }
  ret.push_back(trim(temp));
  return ret;
}

void splitA(const string& str, char ch, string tokens[], int size)
{
  int i = 0;
  string temp;
  for (string::const_iterator it = str.begin(); it != str.end(); it++)
  {
    if (*it != ch)
    {
      temp += *it;
    }
    else
    {
      tokens[i] = trim(temp);
      temp = "";
  	  i++;
	  if (i == size)
	  	break;
    }
  }
  tokens[i] = trim(temp);
}

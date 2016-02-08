#include <iterator>
#include <iostream>
#include <vector>
#include <cstring>
#include <string>

using namespace std;

int main()
{
  const char * ary = "MCLA ALL THE WAY!";
  vector<char> vChars;
  string sChars;

  const char * start = ary;
  const char * end = (ary+strlen(ary));
  for (const char * p = start; p != end; p++)
  {
    sChars += *p;
    vChars.push_back(*p);
  }

  return 0;
}

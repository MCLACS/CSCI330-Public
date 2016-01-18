#include "FileReader.h"
#include "UserInput.h"
#include "helper.h"
#include <iostream>

using namespace std;

int main()
{
  try
  {
    FileReader in1("TestFileStrings.txt");
    while (!in1.endOfFile())
    {
      cout << in1.readString() << endl;
    }

    FileReader in2("TestFileIntegers.txt");
    while (!in2.endOfFile())
    {
      cout << in2.readInt() << endl;
    }

    FileReader in3("TestFileDoubles.txt");
    while (!in3.endOfFile())
    {
      cout << in3.readDouble() << endl;
    }

    UserInput i;
    cout << i.readString("Enter a string:") << endl;
    cout << i.readInt("Enter an int:") << endl;
    cout << i.readString("Enter a string:") << endl;
    cout << i.readDouble("Enter a double:") << endl;
    cout << i.readChar("Enter an char:") << endl;
    cout << i.readString("Enter an string:") << endl;

    cout << trim(string("   ABCDE   ")) << endl;
    vector<string> ret = split(string("A,B,C,D,E"), ',');
    for (vector<string>::const_iterator it = ret.begin();
         it != ret.end(); it++)
     {
        cout << *it << endl;
     }

  }
  catch (const char * msg)
  {
    cout << msg << endl;
  }
  return 0;
}

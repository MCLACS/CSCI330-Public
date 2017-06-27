#include "FileReader.h"
#include "FileWriter.h"
#include "UserInput.h"
#include "helper.h"
#include <iostream>

using namespace std;

int main()
{
  try
  {
    FileReader in1("TestFileStrings.txt");
    while (in1.next())
    {
      cout << in1.readString() << endl;
    }

    FileReader in2("TestFileIntegers.txt");
    while (in2.next())
    {
      cout << in2.readInt() << endl;
    }

    FileReader in3("TestFileDoubles.txt");
    while (in3.next())
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

	 cout << trim(string("   ABCDE   ")) << endl;
	 string tokens[5];
     splitA(string("A,B,C,D,E"), ',', tokens, 5);
     for (int i = 0; i < 5; i++)
     {
        cout << tokens[i] << endl;
     }

     FileWriter fw("testWrite.txt");
     fw.writeLine("This is a line");
     fw.writeLine(string("This is a second line"));
     fw.write(string("This is the start of a line "));
     fw.writeLine(string("This is the end of a line "));
     fw.write(1);
     fw.write(" ");
     fw.writeLine(2);
     fw.writeLine("Now I am done");
     fw.close();
  }
  catch (const char * msg)
  {
    cout << msg << endl;
  }
  return 0;
}

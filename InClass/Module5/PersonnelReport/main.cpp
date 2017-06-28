#include "PersonnelReport.h"
#include "../../../StudentFiles/CSCI330-Public/utilities/FileReader.h"
#include "../../../StudentFiles/CSCI330-Public/utilities/UserInput.h"
#include "../../../StudentFiles/CSCI330-Public/utilities/helper.h"
#include <iostream>
#include <vector>
#include <cstdlib>


using namespace std;

int main()
{
  try
  {
    UserInput i;
    FileReader in(i.readString("Enter employee file: "));
    while (in.next())
    {
      vector<string> tokens = split(in.readString(), ',');
      PersonnelReport rpt(tokens[0], tokens[1], atof(tokens[2].c_str()));
      cout << rpt << endl;
    }
  }
  catch (const char * msg)
  {
    cout << msg << endl;
  }
}

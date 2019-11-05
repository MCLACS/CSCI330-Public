#include <iostream>
#include <string>
#include <cstdlib>

#include "../../../utilities/FileReader.h"
#include "../../../utilities/helper.h"

using namespace std;

int main()
{
    try
    {
        int day(1);
        FileReader in("temps.txt");
    	while (in.next())
    	{
    		string line = in.readString();
    		string tokens[2];
    		splitA(line, ',', tokens, 2);
    		int tempA = atoi(tokens[0].c_str());
            int temA = stoi(tokens[0]);
    		int tempB = atoi(tokens[1].c_str());
    		int delta = tempB - tempA;
    		
    		cout << "Change in temperature on day " << day << " is " << delta << endl;
    		day++;
    	}
    	return 0;
    }
    catch (const char * error)
    {
        cout << error << endl;
        return -1;
    }
}
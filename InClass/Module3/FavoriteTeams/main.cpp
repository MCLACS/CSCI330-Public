#include <iostream>
#include <string>
#include <vector>
#include "../../../utilities/FileReader.h"
#include "../../../utilities/helper.h"

#include "main.h"


int main()
{
	Counts c = {0,0,0,0,0};
	FileReader in("data.txt");
	while (in.next())
	{
		string line = in.readString();
		vector<string> tokens = split(line, ',');
		for (vector<string>::iterator p = tokens.begin()+1; p!=tokens.end(); p++)
		{
			string token = trim(*p);
			if (token == "Phillies")
				c.iPhillies++;
			else if (token == "Braves")
				c.iBraves++;
			else if (token == "Mets")
				c.iMets++;
			else if (token == "Nationals")
				c.iNationals++;
			else if (token == "Miami")
				c.iMiami++;
		}
	}

	cout << "Braves: " << c.iBraves << endl;
	cout << "Phillies: " << c.iPhillies << endl;
	cout << "Mets: " << c.iMets << endl;
	cout << "Nationals: " << c.iNationals << endl;
	cout << "Miami: " << c.iMiami << endl;
}

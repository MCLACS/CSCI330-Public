#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "../../../utilities/FileReader.h"
#include "../../../utilities/helper.h"

struct Counts
{
	int iAdult;
	int iDead;
	int iJuvenile;
	double iTotal;
};

int main()
{
	cout << fixed << setprecision(2);

	Counts c = {0,0,0,0.0};
	FileReader in("data.txt");
	while (in.next())
	{
		string line = in.readString();
		vector<string> tokens = split(line, ',');
		for (vector<string>::iterator p = tokens.begin(); p!=tokens.end(); p++)
		{
			string token = trim(*p);
			if (token == "A")
				c.iAdult++;
			else if (token == "J")
				c.iJuvenile++;
			else if (token == "D")
				c.iDead++;
			c.iTotal++;
		}
	}

	cout << "Percent Adults: %" << (c.iAdult/c.iTotal)*100 << endl;
	cout << "Percent Juveniles: %" << (c.iJuvenile/c.iTotal)*100 << endl;
	cout << "Percent Dead: %" << (c.iDead/c.iTotal)*100 << endl;
}

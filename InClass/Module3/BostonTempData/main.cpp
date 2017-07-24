#include <cstdlib>
#include <iostream>
#include <string>
#include "../../../utilities/FileReader.h"
#include "../../../utilities/helper.h"

#include "main.h"

using namespace std;

int main()
{
	FileReader in("temps.txt");
	Data stats;
	for (int i = 0; i < YEARS; i++)
	{
		stats.totDaysPerYear[i] = 0.0;
		stats.totPerYear[i] = 0.0;
		stats.avePerYear[i] = 0.0;
	}
	for (int i = 0; i < MONTHS_IN_YEAR; i++)
	{
		stats.totDaysPerMonth[i] = 0.0;
		stats.totPerMonth[i] = 0.0;
		stats.avePerMonth[i] = 0.0;
	}

	while (in.next())
	{
		string line = in.readString();
		vector<string> tokens = split(line, ',');
		int month = atoi(tokens[0].c_str());
		int day = atoi(tokens[1].c_str());
		int year = atoi(tokens[2].c_str());
		double ave = atof(tokens[3].c_str());

		stats.totDaysPerMonth[month-1] = stats.totDaysPerMonth[month-1] + 1;
		stats.totPerMonth[month-1] = stats.totPerMonth[month-1] + ave;
		stats.avePerMonth[month-1] = (stats.totPerMonth[month-1] / stats.totDaysPerMonth[month-1]);

		stats.totDaysPerYear[year-1995] = stats.totDaysPerYear[year-1995] + 1;
		stats.totPerYear[year-1995] = stats.totPerYear[year-1995] + ave;
		stats.avePerYear[year-1995] = (stats.totPerYear[year-1995] / stats.totDaysPerYear[year-1995]);
	}

	for (int i = 0; i < MONTHS_IN_YEAR; i++)
		cout << "avePerMonth "<< (i+1) << ": " << stats.avePerMonth[i] << endl;
	for (int i = 0; i < YEARS; i++)
		cout << "avePerYear " << (i+1995) << ": " << stats.avePerYear[i] << endl;
}

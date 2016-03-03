#include <cstdlib>
#include <iostream>
#include <string>
#include "../utilities/FileReader.h"
#include "../utilities/helper.h"

using namespace std;

struct Data
{
	double totDaysPerMonth[12];
	double totPerMonth[12];
	double avePerMonth[12];
	double totDaysPerYear[22];
	double totPerYear[22];
	double avePerYear[22];
};

int main()
{
	FileReader in("temps.txt");
	Data stats;
	for (int i = 0; i < 22; i++)
	{
		stats.totDaysPerYear[i] = 0.0;
		stats.totPerYear[i] = 0.0;
		stats.avePerYear[i] = 0.0;
	}
	for (int i = 0; i < 12; i++)
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
		double ave = atoi(tokens[3].c_str());

		stats.totDaysPerMonth[month-1] = stats.totDaysPerMonth[month-1] + 1;
		stats.totPerMonth[month-1] = stats.totPerMonth[month-1] + ave;
		stats.avePerMonth[month-1] = (stats.totPerMonth[month-1] / stats.totDaysPerMonth[month-1]);

		stats.totDaysPerYear[year-1995] = stats.totDaysPerYear[year-1995] + 1;
		stats.totPerYear[year-1995] = stats.totPerYear[year-1995] + ave;
		stats.avePerYear[year-1995] = (stats.totPerYear[year-1995] / stats.totDaysPerYear[year-1995]);
	}

	for (int i = 0; i < 12; i++)
		cout << "avePerMonth "<< (i+1) << ": " << stats.avePerMonth[i] << endl;
	for (int i = 0; i < 22; i++)
		cout << "avePerYear " << (i+1995) << ": " << stats.avePerYear[i] << endl;
}

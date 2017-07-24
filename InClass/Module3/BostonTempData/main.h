#ifndef MAIN_H
#define MAIN_H

const int MONTHS_IN_YEAR = 12;
const int YEARS = 12;

struct Data
{
	double totDaysPerMonth[MONTHS_IN_YEAR];
	double totPerMonth[MONTHS_IN_YEAR];
	double avePerMonth[MONTHS_IN_YEAR];
	double totDaysPerYear[MONTHS_IN_YEAR];
	double totPerYear[YEARS];
	double avePerYear[YEARS];
};

#endif
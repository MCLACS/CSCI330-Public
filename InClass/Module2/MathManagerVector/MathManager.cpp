#include <cfloat>
#include <vector>
#include "MathManager.h"

using namespace std;

double sum(const vector<double> & nums)
{
	double total(0);
	for (auto p = nums.begin(); p != nums.end(); p++)
	{
		total += *p;
	}
	return total;
}

double max(const vector<double> & nums)
{
	double max(DBL_MIN);
	vector<double>::const_iterator vbegin = nums.begin();
	vector<double>::const_iterator vend = nums.end();
	for (vector<double>::const_iterator p = vbegin; p != vend; p++)
	{
		if (*p > max)
			max = *p;
	}
	return max;
}

double min(const vector<double> & nums)
{
	double min(DBL_MAX);
	vector<double>::const_iterator vbegin = nums.begin();
	vector<double>::const_iterator vend = nums.end();
	for (vector<double>::const_iterator p = vbegin; p != vend; p++)
	{
		if (*p < min)
			min = *p;
	}
	return min;
}

double range(const vector<double> & nums)
{
	return max(nums) - min(nums);
}

double average(const vector<double> & nums)
{
	return sum(nums)/nums.size();
}

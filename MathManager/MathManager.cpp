#include <cfloat>
#include "MathManager.h"

double sum(double ary[], int size)
{
	double total(0);
	for (int i(0); i < size; i++)
	{
		total += ary[i];
	}
	return total;
}

double max(double ary[], int size)
{
	double max(DBL_MIN);
	for (int i(0); i < size; i++)
	{
		if (ary[i] > max)
			max = ary[i];
	}
	return max;
}

double min(double ary[], int size)
{
	double max(DBL_MAX);
	for (int i(0); i < size; i++)
	{
		if (ary[i] < max)
			max = ary[i];
	}
	return max;
}

double range(double ary[], int size)
{
	return max(ary, size) - min(ary, size);
}

double average(double ary[], int size)
{
	return sum(ary, size)/size;
}

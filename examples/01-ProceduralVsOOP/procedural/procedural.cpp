#include "procedural.h"
#include <iostream>
#include <climits>

void readNumbers(int ary[], int size)
{
	std::cout << "Enter " << size << " numbers:" << std::endl;
	for (int i(0); i < size; i++)
	{
		(std::cin >> ary[i]).get();
	}
}

void printNumbers(int ary[], int size)
{
	std::cout << "Numbers: ";
	for (int i(0); i < size; i++)
	{
		std::cout << ary[i] << " ";
	}
	std::cout << std::endl;
}

int sum(int ary[], int size)
{
	double total(0);
	for (int i = 0; i < size; i++)
	{
		total += ary[i];
	}
	return total;
}

int max(int ary[], int size)
{
	int max(INT_MIN);
	for (int i = 0; i < size; i++)
	{
		if (ary[i] > max)
			max = ary[i];
	}
	return max;
}

double average(int ary[], int size)
{
	return sum(ary, size)/(double)size;
}
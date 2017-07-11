#include <iostream>

#include "../../../utilities/UserInput.h"
#include "MathManager.h"
#include "main.h"

int main()
{
	double numbers[SIZE];
	readNumbers(numbers, SIZE);
	printNumbers(numbers, SIZE);
	cout << "Sum: " << sum(numbers, SIZE) << endl;
	cout << "Average: " << average(numbers, SIZE) << endl;
	cout << "Max: " << max(numbers, SIZE) << endl;
	cout << "Min: " << min(numbers, SIZE) << endl;
	cout << "Range: " << range(numbers, SIZE) << endl;
}

void readNumbers(double ary[], int size)
{
	UserInput in;
	cout << "Enter " << size << " integers:" << endl;
	for (int i(0); i < size; i++)
	{
		ary[i] = in.readDouble();
	}
}
void printNumbers(double ary[], int size)
{
	cout << "Numbers: ";
	for (int i(0); i < size; i++)
	{
		cout << ary[i] << " ";
	}
	cout << endl;
}

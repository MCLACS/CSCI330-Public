#include "../utilities/UserInput.h"
#include "MathManager.h"
#include <iostream>
#include <vector>

using namespace std;

const int SIZE(5);

void readNumbers(vector<double> & nums, int size);
void printNumbers(const vector<double> &);

int main(int argc, char * argv[])
{
	vector<double> numbers;
	readNumbers(numbers, SIZE);
	printNumbers(numbers);
	cout << "Sum: " << sum(numbers) << endl;
	cout << "Average: " << average(numbers) << endl;
	cout << "Max: " << max(numbers) << endl;
	cout << "Min: " << min(numbers) << endl;
	cout << "Range: " << range(numbers) << endl;
}

void readNumbers(vector<double> & nums, int size)
{
	UserInput in;
	cout << "Enter " << size << " integers:" << endl;
	for (int i(0); i < size; i++)
	{
		nums.push_back(in.readDouble());
	}
}

void printNumbers(const vector<double> & nums)
{
	cout << "Numbers: ";
	vector<double>::const_iterator vbegin = nums.begin();
	vector<double>::const_iterator vend = nums.end();
	for (vector<double>::const_iterator p = vbegin; p != vend; p++)
	{
		cout << *p << " ";
	}
	cout << endl;
}

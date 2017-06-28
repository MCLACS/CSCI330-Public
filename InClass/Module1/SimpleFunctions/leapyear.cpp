#include <iostream>

using namespace std;

void isLeapYear(int year);

int main()
{
	int year(0);
	cout << "Enter a year: ";
	cin >> year;
	
	if (year >= 2014 && year < 2100)
	{
		isLeapYear(year);
	}
	else
	{
		cout << "Please enter a year >= 2014 and < 2100." << endl;
	}
}

void isLeapYear(int year)
{
	if (year % 4 == 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}

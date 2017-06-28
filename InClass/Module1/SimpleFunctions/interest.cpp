#include <iostream>

using namespace std;

const double TOM_INTEREST = 0.02;
const double SALLY_INTEREST = 0.04; 

int timeValue(double x, double y);

int main()
{
	double x(0), y(0);
	
	cout << "Enter how much money Tom has: ";
	cin >> x;

	cout << "Enter how much money Sally has: ";
	cin >> y;
	
	if (x >= y)
	{
		cout << "It will take " << timeValue(x, y) 
			 << " year(s) for sally to have more money than tom."
			 << endl;
	}
	else
	{
		cout << "Tom must have more money than Sally." << endl;
	}
}

int timeValue(double x, double y)
{
	int years = 0;
	while (x >= y)
	{
		x = x + (x * TOM_INTEREST);
		y = y + (y * SALLY_INTEREST);
		cout << x << endl;
		cout << y << endl;
		years++;
	};
	return years;
}

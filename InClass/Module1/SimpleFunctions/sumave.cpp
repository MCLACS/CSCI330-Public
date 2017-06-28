#include <iostream>

using namespace std;

int sum(int n1, int n2, int n3);
double average(int n1, int n2, int n3);
 
int main()
{
	int n1(0), n2(0), n3(0);
	cout << "Enter number 1: ";
	cin >> n1;

	cout << "Enter number 2: ";
	cin >> n2;

	cout << "Enter number 3: ";
	cin >> n3;
	
	cout << "Sum = " << sum(n1, n2, n3) << endl;
	cout << "Average = " << average(n1, n2, n3) << endl;
}

int sum(int n1, int n2, int n3)
{
	return n1 + n2  + n3;
}

double average(int n1, int n2, int n3)
{
	return (n1 + n2 + n3) / 3.0;
}


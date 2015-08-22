#include "Rectangle.h"
#include <iostream>
#include <climits>
#include <vector>
#include <string>

using namespace std;

template <typename T>
T max(T& x, T& y)
{
	if (x > y)
		return x;
	else 
		return y;
}

template <typename T>
T max(const vector<T>& v)
{
	T m = v[0];
	for (auto it = v.begin(); it < v.end(); it++)
	{
		if (*it > m)
			m = *it;
	}
	return m;
}

int main()
{
	int a = 10;
	int b = 20;

	cout << "Which integer is bigger " << a << " or " << b << "?" << endl;
	cout << max(a, b) << endl;

	double c = 12.4;
	double d = 10.6;

	cout << "Which double is bigger " << c << " or " << d << "?" << endl;
	cout << max(c, d) << endl;

	string s1("ABC");
	string s2("STU");

	cout << "Which string is bigger " << s1 << " or " << s2 << "?" << endl;
	cout << max(s1, s2) << endl;

	Rectangle r1('*', 0, 0, 3, 3);
	Rectangle r2('-', 0, 0, 5, 5);

	cout << "Which rectangle is bigger r1 or r2?" << endl;
	cout << max(r1, r2) << endl;

	string s3("XYZ");
	vector<string> v1;
	v1.push_back(s1);
	v1.push_back(s2);
	v1.push_back(s3);

	cout << "Biggest string in v1 is:" << endl;
	cout << max(v1) << endl;

	Rectangle r3('Q', 0, 0, 6, 6);
	vector<Rectangle> v2;
	v2.push_back(r1);
	v2.push_back(r2);
	v2.push_back(r3);

	cout << "Biggest rectangle in v2 is:" << endl;
	cout << max(v2) << endl;
}
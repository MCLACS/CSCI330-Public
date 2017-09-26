#include <iostream>
#include "Simple.h"

using namespace std;

Simple foo(Simple s)
{
	return s;
}

int main()
{
	{
		Simple s1;
		Simple s2(s1);
	}

	cout << endl;
	cout << endl;

	Simple s4;
	Simple s3;

	cout << endl;
	cout << endl;

	s4 = foo(s3);

	// cout << endl;
	// cout << endl;
}

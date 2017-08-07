
#include "Rectangle.h"
#include <iostream>

using namespace std;

int main()
{
	// int i(100);
	// cout << "Prefix " << endl;
	// cout << ++i << endl;
	// cout << i << endl;
	
	// i = 100;
	// cout << "Postfix " << endl;
	// cout << i++ << endl;
	// cout << i << endl;
	
	Rectangle r(10, 20, 3, -2);
	cout << "Before: " << r << endl;
	
	r = r+5;
	r++;
	r = r-3;
	r--;
	
	cout << "After: " << r << endl;
}

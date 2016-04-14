
#include "Rectangle.h"
#include <iostream>

using namespace std;

int main()
{
	Rectangle r(10, 20, 3, -2);
	r.grow(20);
	Rectangle r2(r);
	cout << r2 << endl;

	cout << (r == r2) << endl;
}

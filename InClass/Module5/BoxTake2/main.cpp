#include <iostream>
#include <string>
#include "Box.h"

using namespace std;

int main()
{
	Box b1;
	b1.add("Hello-B1");
	b1.add("Jump-B1");
	cout << "Box1:" << endl << b1 << endl;

	Box b2;
	b2.add("Yikes-B2");
	cout << "Box2:" << endl << b2 << endl;

	Box b3 = b1 + b2;
	cout << "Box3:" << endl << b3 << endl;

	cout << "b3[1] = " << b3[1] << endl;
	b3[1] = "new guy!";
	cout << "b3[1] = " << b3[1] << endl;

	Box b4(b3);
	cout << "b3 == b2 is " << (b3 == b2) << endl;
	cout << "b3 == b4 is " << (b3 == b4) << endl << endl;

	b3 = b2;
	cout << "Box2:" << endl << b2 << endl;
	cout << "Box3:" << endl << b3 << endl;
	cout << "b3 == b2 is " << (b3 == b2) << endl;
}

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

	Box b2(b1);
	b2.add("Yikes-B2");	
	cout << "Box2:" << endl << b2 << endl;
}

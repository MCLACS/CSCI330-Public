#include <iostream>
#include "FirstLast.h"

int main()
{
	FirstLast fl;
	fl.setFirst("Sally");
	fl.setLast("Smith");

	cout << "First Last: " << fl.fullName() << endl;
	cout << "Last, First: " << fl.lastFirst() << endl;
	cout << "Short Name: " << fl.shortName() << endl;
	
	cout << "Default: " << fl << endl;
}

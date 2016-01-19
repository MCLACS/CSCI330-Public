#include <iostream>
#include "UserInput.h"

using namespace std;

int main()
{
	UserInput in;
	cout << "Enter your age: ";
	int age = in.readInt();
	
	int dogAge = age / 7;
	
	cout << "Hello, your age in dog years is " << dogAge << endl;

	for (int i = 0; i < dogAge; i++)
	{
		cout << (i+1) << "..." << endl;
	}

	return 0;
}

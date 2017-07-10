#include <iostream>

#include "../../../utilities/UserInput.h"

using namespace std;

int main()
{
	try
	{
		UserInput in;
		int age = in.readInt("Enter your age: ");
	
		int dogAge = age / 7;
	
		cout << "Hello, your age in dog years is " << dogAge << endl;
	
		for (int i = 0; i < dogAge; i++)
		{
			cout << (i+1) << "..." << endl;
		}
	
		return 0;
	}
	catch (const char * error)
	{
		cout << error << endl;
		return -1;
	}
}

#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

int main()
{
	try
	{
		Stack s;
		s.push("One");
		s.push("Two");
		s.push("Three");
		cout << s << endl;

		s.pop();
		cout << s;
		cout << s.peek() << endl << endl;

		s.pop();
		cout << s << endl;

		s.push("Four");
		s.push("Five");
		cout << s;
	}
	catch (const char * s)
	{
		cout << s << endl;
	}
}

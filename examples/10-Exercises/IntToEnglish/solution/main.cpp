#include <iostream>

using namespace std;

void printEnglish(int i)
{
	cout << i << endl;
}

void checkForError()
{
	if (cin.fail())
	{
		cin.clear();
		throw string("bad input");
	}
}

int main()
{
	try
	{
		int i(0);
		cout << "Enter an integer: ";			
		cin >> i;
		cin.ignore(1000, '\n');
		checkForError();
		if (i < 0)
			throw string("bad input");

		int multiplier = 1;
		while (i > 0)
		{
			int r = i % 10;
			cout << r << " * " << multiplier << endl;
			i = i / 10;
			multiplier = multiplier * 10;
		}
	}
	catch (string error)
	{
		cout << error << endl;
	}
}

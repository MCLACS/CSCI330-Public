#include <iostream>
#include "FileReader.h"

using namespace std;

int main()
{
	try
	{
		string s;
		cout << "Enter a file: ";
		getline(cin, s);

		int lines = 0;
		int size = 0;
		FileReader in(s);
		while (!in.endOfFile())
		{
			string line = in.readLine();
			size = size + line.size();
			size = size + 1; // keep track of newlines
		}
		size = size - 1; // last line does not have a new line
		cout << "File size: " << size << " bytes." << endl;
	}
	catch (string error)
	{
		cout << error << endl;
	}
}
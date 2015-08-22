#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "FileReader.h"
#include "../classes/MaxMinFinder.h"

using namespace std;

int main()
{
	try
	{
		vector<string> names;
		FileReader in("names.txt");
		while (!in.endOfFile())
		{
			string s = in.readLine();
			names.push_back(s);
		}

		while (names.size() > 0)
		{
			MaxMinFinder<string> finder(names[0]);
			for (auto it = names.begin()+1; it != names.end(); it++)
			{
				finder.test(names);
			}
			auto it = find(names.begin(), names.end(), finder.min());
			names.erase(it);
			cout << finder.min() << " ";
		}
		cout << endl;
	}
	catch (string error)
	{
		cout << error << endl;
	}

}
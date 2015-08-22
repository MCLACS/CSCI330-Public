#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "FileReader.h"

using namespace std;

vector<string> intersect(FileReader& file1, FileReader& file2)
{
	vector<string> v1;
	vector<string> ret;

	while (!file1.endOfFile())
		v1.push_back(file1.readLine());

	while (!file2.endOfFile())
	{
		string line = file2.readLine();
		if (find(v1.begin(), v1.end(), line) != v1.end()) 
			ret.push_back(line);
	}

	return ret;
}

int main()
{
	try
	{
		FileReader file1("../names1.txt");
		FileReader file2("../names2.txt");

		vector<string> v = intersect(file1, file2);

		for (auto it = v.begin(); it != v.end(); it++)
		{
			cout << *it << endl;
		}
	}
	catch (string error)
	{
		cout << error << endl;
	}
}
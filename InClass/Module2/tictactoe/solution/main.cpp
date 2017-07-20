#include <vector>
#include <string>
#include <iostream>

#include "../../../../utilities/FileReader.h"
using namespace std;

vector<char> readfile(string file)
{
	vector<char> state;
	FileReader in(file);
	while (in.next())
	{
		string s = in.readString();
		state.push_back(s[0]);
	}	
	return state;
}

bool gameover(vector<char> state)
{

	// check for horizontal victory
	if (state[0] != '-' && state[0] == state[1] && state[1] == state[2])
		return true;
	else if (state[3] != '-' && state[3] == state[4] && state[4] == state[5])
		return true;
	else if (state[6] != '-' && state[6] == state[7] && state[7] == state[8])
		return true;

	// check for vertical victory
	else if (state[0] != '-' && state[0] == state[3] && state[3] == state[6])
		return true;
	else if (state[1] != '-' && state[1] == state[4] && state[4] == state[7])
		return true;
	else if (state[2] != '-' && state[2] == state[5] && state[5] == state[8])
		return true;	

	// check for diagonal victory
	else if (state[0] != '-' && state[0] == state[4] && state[4] == state[8])
		return true;
	else if (state[2] != '-' && state[2] == state[4] && state[4] == state[6])
		return true;

	// check for tie
	bool space = false;
	for (auto it = state.begin(); it != state.end(); it++)
	{
		if ( (*it) == '-' )
		{
			space = true;
			break;
		}
	}
	
	if (!space)
		return true;
	else 
		return false;
}

int main()
{
	try
	{
		string files[] = {"../file1.txt", "../file2.txt", "../file3.txt",
			"../file4.txt", "../file5.txt", "../file6.txt"};
		for (int i = 0; i < 6; i++)
		{
			vector<char> v = readfile(files[i]);
			cout << files[i] << ": " << gameover(v) << endl;
		}
	}
	catch (string error)
	{
		cout << error << endl;
	}
}
#include "Player.h"
#include "FileReader.h"
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
	try
	{
		vector<Player> players; 
		FileReader in("../players.txt");
		while (!in.endOfFile())
		{
			string first = in.readLine();
			string last = in.readLine();
			int age = atoi(in.readLine().c_str());
			string position = in.readLine();
				
			Player p(first, last, age, position);
			players.push_back(p);
			in.readLine();
		}

		string pos[] = {string("Point Guard"), string("Shooting Guard"), 
			string("Power Forward"), string("Small Forward"), 
			string("Center")};
		for (int i = 0; i < 5; i++)
		{
			for (auto it = players.begin(); it != players.end(); it++)
			{
				if (it->getPosition() == pos[i])
				{
					cout << *it << endl;
					break;
				}
			}
		}
	}
	catch (string error)
	{
		cout << error << endl;
	}
}
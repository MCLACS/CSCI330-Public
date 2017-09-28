#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include "../../../utilities/FileReader.h"
#include "../../../utilities/UserInput.h"
#include "../../../utilities/helper.h"

using namespace std;

const int NUMS = 70;

int topNum(const vector<int> & counts);
void updateCounts(vector<int> & counts, vector<string> & line);
vector<int> bestBet(const vector<int> & counts);
void printCounts(const vector<int> & c);

int main()
{
	vector<int> counts;
	for (int i = 0; i < NUMS; i++)
		counts.push_back(0);

	FileReader f("Powerball.txt");
	while (f.next())
	{
		string line = f.readString();
		vector<string> f = split(line, ',');
		updateCounts(counts, f);
	}

	printCounts(counts);

	UserInput in;
	while(true)
	{
		cout << "Enter powerball number: ";
		int choice = 0;
		try
		{
			choice = in.readInt();
		}
		catch (char const * err)
		{
			choice = -99;
		}

		if (choice == 99)
		{
			int maxNum = topNum(counts);
			cout << "Most popular number is " << maxNum << "." << endl;
		}
		else if (choice == -1)
		{
			break;
		}
		else if (choice == 0)
		{
			vector<int> best = bestBet(counts);
			cout << "Play: "
				<< best[0] << "," << best[1] <<  "," << best[2]
				<<  "," << best[3] <<  "," << best[4] <<  "," << best[5]
				<< endl;
		}
		else if (choice > 0 && choice < 70)
		{
			cout << choice << " was picked "
				<< counts[choice] << " times." << endl;
		}
		else
		{
			cout << "Invalid input, try again." << endl;
		}
	}
}

void printCounts(const vector<int> & c)
{
	int count = 1;
	for (vector<int>::const_iterator it = c.begin(); it != c.end(); it++)
	{
		cout << count << "->" << (*it) << endl;
		count++;
	}
}

void updateCounts(vector<int> & c, vector<string> & line)
{
	for (vector<string>::iterator it = line.begin(); it != line.end(); it++)
	{
		int num = atoi((*it).c_str());
		c[num-1] = c[num-1]+1;
	}
}

vector<int> bestBet(const vector<int> & counts)
{
	vector<int> ret;
	vector<int> temp(counts);
	for (int i = 0; i < 6; i++)
	{
		int num = topNum(temp);
		temp[num] = 0;
		ret.push_back(num);
	}
	return ret;
}

int topNum(const vector<int> & counts)
{
	int max = 0;
	int maxNum = 0;
	for (int i = 1; i < NUMS; i++)
	{
		if (counts[i] >= max)
		{
			max = counts[i];
			maxNum = i;
		}
	}
	return maxNum;
}

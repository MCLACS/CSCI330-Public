#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <iostream>
#include "../../../utilities/FileReader.h"
#include "main.h"

using namespace std;

int main()
{
    srand(time(NULL));

    vector<string> quotes;
    loadQuotes(quotes);
    cout << pickChoice(quotes) << endl;
}

void loadQuotes(vector<string> & v)
{
  FileReader in("quotes.txt");
  while (in.next())
    v.push_back(in.readString());
}

string pickChoice(const vector<string> & v)
{
  int choice = rand() % v.size();
  return v[choice];
}

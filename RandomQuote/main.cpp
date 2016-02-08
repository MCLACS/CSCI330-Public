#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <iostream>
#include "../utilities/FileReader.h"

using namespace std;

int main()
{
    srand(time(NULL));

    vector<string> quotes;
    FileReader in("quotes.txt");
    while (in.next())
      quotes.push_back(in.readString());

    int choice = rand() % quotes.size();
    cout << quotes[choice] << endl;
}

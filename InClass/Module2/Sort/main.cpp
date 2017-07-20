#include <vector>
#include <iostream>
#include <algorithm>

#include "../../../utilities/FileReader.h"
#include "../../../utilities/FileWriter.h"

using namespace std;

int main()
{
    try
    {
        FileReader in("list.txt");
        FileWriter out("sorted.txt");
        
        vector<int> nums;
        while (in.next())
        {
            nums.push_back(in.readInt());
        }
        
        sort(nums.begin(), nums.end());
        
        for (auto it = nums.begin(); it != nums.end(); it++)
        {
           out.writeLine(*it); 
        }
        
        out.close();
    }
    catch (const char * error)
    {
        cout << error << endl;
    }
}
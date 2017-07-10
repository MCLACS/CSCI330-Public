#include <iostream>

#include "../../../utilities/UserInput.h"

using namespace std;

const int SIZE = 5;

int main()
{
    try
    {
        UserInput in;
        int nums[SIZE];
        
        for (int i = 0; i < SIZE; i++)
        {
            cout << "Enter number " << i+1 << ": ";    
            nums[i] = in.readInt();
        }
    
        int count1(0);
        int count2(0);
        for (int i(0); i < SIZE; i++)
        {
            if (nums[i] > nums[0])
                count1++;
            if (nums[i] > nums[SIZE-1])
                count2++;
        }
     
        cout << "There are " << count1 << " item(s) larger than the first" << endl;
        cout << "There are " << count2 << " item(s) larger than the last" << endl;
    
    }
    catch (char const * error)
    {
        cout << error << endl;
    }
    
    return 0;
}


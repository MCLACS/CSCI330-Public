#include <iostream>

#include "../../../utilities/UserInput.h"

#include "SimpleArraysB.h"

using namespace std;

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
        
        int j(SIZE-2);
        for (int i = 1; i < SIZE/2; i++)
        {
            swap(nums, j, i);
            j = j - 1;
        }
     
        for (int i = 0; i < SIZE; i++)
        {
            cout << nums[i];
        }
        cout << endl;
        
        return 0;
    }
    catch (const char * error)
    {
        cout << error << endl;
        return -1;
    }
}

void swap(int nums[], int a, int b)
{
    int temp = nums[a];
    nums[a] = nums[b];
    nums[b] = temp;
}

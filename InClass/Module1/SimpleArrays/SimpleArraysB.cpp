#include <iostream>
using namespace std;

const int SIZE = 7;

void swap(int nums[], int a, int b);

int main()
{
    int nums[SIZE];
    
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter number " << i+1 << ": ";    
        (cin >> nums[i]).get();
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

void swap(int nums[], int a, int b)
{
    int temp = nums[a];
    nums[a] = nums[b];
    nums[b] = temp;
}

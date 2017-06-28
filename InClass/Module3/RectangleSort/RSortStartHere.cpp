#include <iostream>
using namespace std;

void selectionsort(int arr[], int size);
void print(int arr[], int size);

int main()
{
    int i[] = {2,3,1,7,4,9,20,12,11,4};
    selectionsort(i, 10);
    print(i, 10);
    return 0;
}

void selectionsort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++) 
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
   }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " << endl;
    }
}

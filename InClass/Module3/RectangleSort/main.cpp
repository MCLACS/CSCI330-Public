#include <iostream>
#include <string>
using namespace std;

struct rectangle
{
    string name;
    int height;
    int width;
};

void selectionsortH(rectangle arr[], int size);
void selectionsortW(rectangle arr[], int size);
void print(rectangle arr[], int size);

int main()
{
    rectangle rect1 = {"rect1", 10, 20};
    rectangle rect2 = {"rect2", 5, 15};
    rectangle rect3 = {"rect3", 20, 10};

    rectangle rects1[] = {rect1, rect2, rect3};
    rectangle rects2[] = {rect1, rect2, rect3};

    selectionsortH(rects1, 3);
    selectionsortW(rects2, 3);

    print(rects1, 3);
    cout << endl;
    print(rects2, 3);

    return 0;
}

void selectionsortH(rectangle arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j].height < arr[min].height)
            {
                min = j;
            }
        }
        rectangle tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
   }
}

void selectionsortW(rectangle arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j].width < arr[min].width)
            {
                min = j;
            }
        }
        rectangle tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
   }
}

void print(rectangle arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i].name << ", " << arr[i].height << ", "
            << arr[i].width << endl;
    }
}

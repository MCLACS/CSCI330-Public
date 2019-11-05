#include <iostream>

using namespace std;

#include "FileReader.h"

int main()
{
    try
    {
        double max(0.0);
        FileReader f("numbers.txt");
        while (f.next())
        {
            double num = f.readDouble();
            if (num > max)
                max = num;
        }
        cout << "The largest number in the file is " << max << endl;
        return 0;
    }
    catch (const char * error)
    {
        cout << error << endl;
        return -1;
    }
}
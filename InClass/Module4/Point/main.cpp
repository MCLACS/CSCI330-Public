
#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
    Point origin;
    Point firstPoint(10, 20);

    int diff = firstPoint.distance(origin);

    cout << "distance between " << origin << " and " << firstPoint 
         << " is " << diff << endl;

    return 0;
}
#include "NumDays.h"
#include <iostream>

using namespace std;

void print(const NumDays& n)
{
  cout << "hours: " << n.getHours() << " days: " << n.getDays() << endl;
}

int main()
{
    NumDays n1(12);
    print(n1); // 12 hours, 1.5 days

    cout << endl;

    print(++n1); // 13 hours, 1.625 days
    print(--n1); // 12 hours, 1.5 days

    cout << endl;

    print(n1++); // 12 hours, 1.5 days
    print(n1--); // 13 hours, 1.625 days

    cout << endl;

    print(n1--); // 12 hours, 1.5 days

    cout << endl;

    NumDays n2(8);
    NumDays n3(n1 + n2);

    print(n1); // 11 hours, 1.375 days
    print(n2); // 8 hours, 1 day
    print(n3); // 19 hours, 2.375 days
}

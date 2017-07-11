#include <iostream>
#include "../../../utilities/UserInput.h"

using namespace std;

int main()
{
  UserInput i;
  int salary = 1;
  int total = 0;
  int days = i.readInt("How many days will you be earning a salary?");

  cout << "Day\tSalary" << endl;
  cout << "------------------------" << endl;
  for (int i = 0; i < days; i++)
  {
    total = total + salary;
    cout << i << "\t" << salary << endl;
    salary = salary * 2;
  }
  cout << "You have earned $" << total / 100.0 << endl;

  return 0;
}

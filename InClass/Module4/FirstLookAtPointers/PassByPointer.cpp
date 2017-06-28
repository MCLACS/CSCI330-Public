#include <iostream>
using namespace std;

void changeMeInt(int x);
void changeMe1(int a[]);
void changeMe2(int * a);

int main()
{
  int ary1[5] = {1, 2, 3, 4, 5};
  int ary2[5] = {6, 7, 8, 9, 10};

  int i(100);
  changeMeInt(i);
  cout << i << endl;

  changeMe1(ary1);
  for (int i(0); i < 5; i++)
      cout << ary1[i] << " ";
  cout << endl;

  changeMe2(ary2);
  for (int i(0); i < 5; i++)
      cout << ary2[i] << " ";
  cout << endl;
}

void changeMeInt(int x)
{
  x = 999;
}

void changeMe1(int a[])
{
  for (int i(0); i < 5; i++)
      a[i] = a[i] * 10;
}

void changeMe2(int * a)
{
  for (int i(0); i < 5; i++)
      a[i] = a[i] * 100;
}

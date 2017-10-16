#include <iostream>

using namespace std;

int main()
{
  int a = 100;
  cout << a++ << endl;
  cout << a << endl;
  
  int b = 200;
  a = b++;
  cout << b << endl;
  cout << a << endl;
}

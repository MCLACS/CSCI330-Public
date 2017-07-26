#include <iostream>
using namespace std;

int main()
{
  int ary[5] = {1, 2, 3, 4, 5};
  cout << "ary = " << ary << endl;

  for (int i(0); i < 5; i++)
  {
      cout << ary[i] << " ";
  }
  cout << endl;

  for (int i(0); i < 5; i++)
  {
      int * ptr = ary+i;
      cout << ptr << " points to " << *(ptr) << " " << endl;
  }
  cout << endl;
  
  cout << "some value in memory = " << *(ary-1) << endl;
}

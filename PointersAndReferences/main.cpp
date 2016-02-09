#include <iostream>
using namespace std;

void change(int * p)

int main()
{
  // stack (push i then push j):
  // location (x-1): 200
  // location (x): 100
  int i = 100;
  int j = 200;

  int * pI = &i;
  int * pJ = &j;

  cout << "i = " << i << endl; // value of i
  cout << "pI = " << pI << endl; // addresss of i
  cout << "&pI = " << &pI << endl; // addresss of the pointer to i

  cout << "j = " << j << endl; // value of j
  cout << "pJ = " << pJ << endl; // addresss of j
  cout << "&pJ = " << &pI << endl; // addresss of the pointer to j

  // use pointer arithmetic to find j from i...
  cout << "pJ-pI = " << pJ-pI << endl;
  cout << "pJ-pI = " << pJ-pI << endl;
  cout << "*(pI-1) = " << *(pI-1) << endl;

  change(pI);
  change(pJ);

  cout << "A bigger i = " << i << endl;
  cout << "A bigger j = " << j << endl;

  return 0;
}

void change(int * p)
{
  *p = (*p)+100;
}

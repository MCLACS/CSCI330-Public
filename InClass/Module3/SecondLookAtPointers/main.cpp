#include <iostream>
using namespace std;

void nochange(int x);
void change(int * p);
void change(int & x);
void nocompile1(const int * x);
void nocompile2(const int & x);

int main()
{
  int i = 100;
  int j = 200;
  int * pI = &i;
  int * pJ = &j;

  cout << "i = " << i << endl; // value of i
  cout << "pI = " << pI << endl; // addresss of i
  cout << "&pI = " << &pI << endl; // addresss of the pointer to i
  cout << endl;

  cout << "j = " << j << endl; // value of j
  cout << "pJ = " << pJ << endl; // addresss of j
  cout << "&pJ = " << &pI << endl; // addresss of the pointer to j
  cout << endl;

  // use pointer arithmetic to find j from i...
  cout << "pI-pJ = " << pI-pJ << endl;
  cout << "*(pI+1) = " << *(pI+1) << endl;
  cout << endl;

  nochange(i);
  nochange(j);
  cout << "The same old i = " << i << endl;
  cout << "The same old j = " << j << endl;
  cout << endl;

  change(pI);
  change(pJ);
  cout << "A bigger i = " << i << endl;
  cout << "A bigger j = " << j << endl;
  cout << endl;

  change(i);
  change(j);
  cout << "An even bigger i = " << i << endl;
  cout << "An even bigger j = " << j << endl;
  cout << endl;

  nocompile1(&i);
  nocompile2(i);
}

void nochange(int x)
{
  x = x + 100;
}

void change(int * p)
{
  *p = (*p) + 100;
}

void change(int & x)
{
  x = x + 100;
}

void nocompile1(const int * p)
{
  *p = (*p) + 100;
}

void nocompile2(const int & x)
{
  x = x + 100;
}

#include <iostream>

using namespace std;

const int SIZE = 6;

void buildMatrix(int m[][SIZE]);
void printMatrix(int m[][SIZE]);
int fibonacci(int n);

int main()
{
  int matrix[SIZE][SIZE];
  buildMatrix(matrix);
  printMatrix(matrix);

  return 0;
}

void buildMatrix(int m[][SIZE])
{
  for (int r(0); r < SIZE; r++)
  {
    for (int c(0); c < SIZE; c++)
    {
      m[r][c] = fibonacci(r + (r*(SIZE-1)) + c);
    }
  }
}

void printMatrix(int m[][SIZE])
{
  cout << "************************************************************" << endl;
  for (int r(0); r < SIZE; r++)
  {
    for (int c(0); c < SIZE; c++)
    {
      cout << m[r][c] << "\t";
    }
    cout << endl;
  }
  cout << "************************************************************" << endl;
}

int fibonacci(int n)
{
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;
  else
    return fibonacci(n-1) + fibonacci(n-2);
}

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../utilities/UserInput.h"

using namespace std;

bool checkPin(int pin[], int guess[], int length);
void guessPin(int guess[], int length);

int main()
{
  srand(time(NULL));

  UserInput in;
  cout << "Enter the length of the PIN:";
  int length = in.readInt();
  int pin[length];
  int guess[length];

  for (int i(0); i < length; i++)
  {
    cout << "Enter digit " << i << ":";
    pin[i] = in.readInt();
  }

  int tries(0);
  do
  {
    guessPin(guess, length);
    tries++;
  }
  while (!checkPin(pin, guess, length));

  cout << "It took me " << tries << " to guess your pin." << endl;
}

bool checkPin(int pin[], int guess[], int length)
{
  bool ret(true);
  for (int i(0); i < length && ret ; i++)
  {
    ret = pin[i] == guess[i];
  }
  return ret;
}

void guessPin(int guess[], int length)
{
  for (int i = 0; i < length ; i++)
  {
    guess[i] = rand() % 10;
  }
}

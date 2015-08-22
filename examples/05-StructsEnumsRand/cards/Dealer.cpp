#include <iostream>
#include <cstdlib>
#include <ctime>

#include "CardUtilities.h"

using namespace std;

int main()
{
    srand(time(NULL));
    Card hand[5];
    
    for (int i = 0; i < HAND_SIZE; i++)
    {
        Card c;
        
        do
        {
            c.rank = randRank();
            c.suit = randSuit();
        } while (inHand(c, hand));
        
        hand[i] = c;
    }

    for (int i = 0; i < HAND_SIZE; i++)
    {
        cout << hand[i];
    }
}



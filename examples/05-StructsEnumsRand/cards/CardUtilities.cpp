#include <iostream>
#include <cstdlib>
#include "CardUtilities.h"

using namespace std;

int randRank()
{
    return rand() % 13 + 1;
}

Suit randSuit()
{
    Suit s;
    int num = rand() % 4;
    if (num == 0)
        s = hearts;
    else if (num == 1)
        s = diamonds;
    else if (num == 2)
        s = clubs;
    else
        s = spades;    

    return s;   
}

bool inHand(Card c, Card hand[])
{
    bool yes = false;
    for (int i = 0; i < HAND_SIZE; i++)
    {
        if (c.rank == hand[i].rank && c.suit == hand[i].suit)
        {
            yes = true;
            break;
        }   
    }
    return yes;
}

std::ostream& operator<<(std::ostream& os, const Card& card)
{
    if (card.rank == 1)
        cout << "Ace";
    else if (card.rank == 11)
        cout << "Jack";
    else if (card.rank == 12)
        cout << "Queen";
    else if (card.rank == 13)
        cout << "King";
    else
        cout << card.rank;
        
    cout << " of ";
    
    if (card.suit == hearts)
        cout << "hearts";
    else if (card.suit == clubs)
        cout << "clubs";
    else if (card.suit == diamonds)
        cout << "diamonds";
    else if (card.suit == spades)
        cout << "spades";
    
    cout << endl; 

    return os;
}
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int HAND_SIZE = 5;

enum Suit {hearts, clubs, diamonds, spades};

struct Card
{
    int rank;
    Suit suit;
};

int randRank();
Suit randSuit();
bool inHand(Card c, Card hand[], int handSize);
void printHand(Card hand[]);
bool fourOfAKind(Card hand[]);

int main()
{
    srand(time(NULL));
    int noHands = 0;
    Card hand[5];

    // do this while I don't have four of a kind...
    do
    {
        // deal a hand...
        for (int i = 0; i < HAND_SIZE; i++)
        {
            Card c;

            // do this while the card I pick is already in my hand...
            do
            {
                c.rank = randRank();
                c.suit = randSuit();
            } while (inHand(c, hand, i));

            hand[i] = c;
        }
        noHands++;
    } while (!fourOfAKind(hand));

    printHand(hand);
    cout << "It took " << noHands << " to get four of a kind!" << endl;

    return 0;
}

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

bool inHand(Card c, Card hand[], int handSize)
{
    bool yes = false;
    for (int i = 0; i < handSize; i++)
    {
        if (c.rank == hand[i].rank && c.suit == hand[i].suit)
        {
            yes = true;
            break;
        }
    }
    return yes;
}

void printHand(Card hand[])
{
    cout << "Hand: " << endl;

    for (int i = 0; i < HAND_SIZE; i++)
    {
        if (hand[i].rank == 1)
            cout << "Ace";
        else if (hand[i].rank == 11)
            cout << "Jack";
        else if (hand[i].rank == 12)
            cout << "Queen";
        else if (hand[i].rank == 13)
            cout << "King";
        else
            cout << hand[i].rank;

        cout << " of ";

        if (hand[i].suit == hearts)
            cout << "hearts";
        else if (hand[i].suit == clubs)
            cout << "clubs";
        else if (hand[i].suit == diamonds)
            cout << "diamonds";
        else if (hand[i].suit == spades)
            cout << "spades";

        cout << endl;
    }
}

bool fourOfAKind(Card hand[])
{
    int max = 0;

    for (int i = 0; i < HAND_SIZE-1; i++)
    {
        int count = 1;
        Card countMe = hand[i];
        for (int j = 0; j < HAND_SIZE; j++)
        {
            if (i != j && hand[i].rank == hand[j].rank)
            {
                count++;
            }
        }
        if (count > max)
            max = count;
    }
    return (max == 4);
}

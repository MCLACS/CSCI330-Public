#ifndef CARD_UTILITIES_H
#define CARD_UTILITIES_H

#include <iostream>

const int HAND_SIZE = 5;

enum Suit {hearts, clubs, diamonds, spades};

struct Card
{
    int rank;
    Suit suit;
};

int randRank();
Suit randSuit();
bool inHand(Card c, Card hand[]);
std::ostream& operator<<(std::ostream& os, const Card& card);

#endif


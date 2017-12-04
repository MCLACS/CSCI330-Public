#ifndef ROOMS_H
#define ROOMS_H

#include <iostream>

using namespace std;

class Room
{
public:
	virtual void describe() = 0;
};

class Jail : public Room
{
public:
	virtual void describe()
	{
		cout << "You enter a dark, smelly jail cell." << endl;
	}
};


class Cave : public Room
{
public:
	virtual void describe()
	{
		cout << "You enter a wet, creepy cave. "  << 
		"Bats are flying around everywhere." << endl;
	}
};

class TreasureRoom : public Room
{
public:
	virtual void describe()
	{
		cout << "You enter a large treasure room. " << 
		"You see gold, diamonds, and Pokemon cards." << endl;
	}
};


#endif
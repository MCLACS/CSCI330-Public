#include "Rooms.h"
#include <iostream>

char getDirection()
{
	char dir = 'q';
	do
	{
		cout << "You can go N, S, E, and W (q to exit): ";
		(cin >> dir).get();
	} while (dir != 'N' && dir != 'S' && 
		     dir != 'E' && dir != 'W' && dir != 'q');
	return dir;	
}

Room * getRoom()
{
	Room * pRoom = NULL;
	int r = rand() % 3;
	if (r == 0)
	{
		pRoom = new Jail();
	}
	else if (r == 1)
	{
		pRoom = new Cave();
	}
	else 
	{
		pRoom = new TreasureRoom();
	}
	return pRoom;
}

int main()
{
	char dir = 'N';
	while (dir != 'q')
	{
		dir = getDirection();
		Room * pRoom = getRoom();
		pRoom->describe();
		delete pRoom;
	}
}
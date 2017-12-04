#include "Rooms.h"
#include "RoomMaker.h"
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

int main()
{
	char dir = 'N';
	while (dir != 'q')
	{
		RoomMaker rm;
		dir = getDirection();
		Room * pRoom = rm.getRoom();
		pRoom->describe();
	}
}
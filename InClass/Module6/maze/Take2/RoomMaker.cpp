#include <iostream>
#include "RoomMaker.h"
#include "Rooms.h"

using namespace std;

Room * RoomMaker::getRoom()
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
	m_rooms.push_back(pRoom);
	return pRoom;
}

RoomMaker::~RoomMaker()
{
    for (vector<Room *>::iterator p = m_rooms.begin(); p != m_rooms.end(); p++)
    {
        cout << "deleting room..." << endl;
        delete *p;
    }
}
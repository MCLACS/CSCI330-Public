#ifndef ROOMMAKER_H
#define ROOMMAKER_H

#include <vector>
#include "Rooms.h"

using namespace std; 

class RoomMaker
{
public:
    RoomMaker() : m_rooms() {}
    
    Room * getRoom();
    virtual ~RoomMaker();
    
private:
    vector<Room *> m_rooms;
};

#endif
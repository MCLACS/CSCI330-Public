#ifndef PLAYER_H
#define PLAYER_H


#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
	Player(string first, string last, int age, string position) :
		m_first(first), m_last(last), m_age(age), m_position(position)
	{}

	string getPosition() const
	{
		return m_position;
	}
	
	friend ostream& operator<<(ostream& os, const Player& p); 

private:
	string m_first;
	string m_last;
	int m_age;
	string m_position;
};


#endif
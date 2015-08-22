#include "Player.h"
#include <iostream>

using namespace std;

ostream& operator<<(ostream& os, const Player& p)
{
	os << p.m_first << " " << p.m_last << " (" << p.m_age << ")" << endl;
	os << p.m_position << endl;
	return os;
}
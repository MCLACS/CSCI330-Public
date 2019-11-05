#include <iostream>
#include <cmath> 
#include "Point.h"

using namespace std;

// default ctor
Point::Point() :
	m_x(0), m_y(0)
{

}

// copy ctor
Point::Point(const Point & other) :
	m_x(other.m_x), m_y(other.m_y)
{

}

Point::Point(int x, int y) :
	m_x(x), m_y(y)
{

}

// dtor...
Point::~Point()
{

}

// other methods...
//...
int Point::distance(const Point& other) const
{
    int dif1 = (m_x - other.m_x); 
    int dif2 = (m_y - other.m_y);
    int dist = sqrt(pow(dif1, 2) + pow(dif2, 2));
    return dist;
}

ostream & operator<<(ostream & os, const Point & x)
{
    os << "I am a point!  Here are my coordinates:" << endl;
    os << "(" << x.m_x << "," << x.m_y << ")";
	return os;
}

#ifndef POINT_H
#define POINT_H

#include <iostream>

using namespace std;

class Point
{
private:
	// class state ...
	int m_x;
	int m_y;

public:
	// behavior...

	Point(); // default ctor
	Point(const Point & other); // copy ctor
    Point(int x, int y);

	virtual ~Point(); // destructor

	// additional methods
	// ...
    int distance(const Point& other) const;

	// operator overloads
	friend ostream & operator<<(ostream & os, const Point & x);
};

// prototype for the global operator<< function
ostream & operator<<(ostream & os, const Point & x);

#endif

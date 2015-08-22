#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point
{
public:
	Point(int x, int y);
	Point(const Point& other);
	int getX() const;
	int get() const;
	void setX(int x);
	void setY(int y);
	Point& operator=(const Point& rhs);
	bool operator==(Pointl& rhs) const;
	friend ostream& operator<<(ostream& os, const Point& dt);

private:
	int m_x;
	int m_y;
};

#endif
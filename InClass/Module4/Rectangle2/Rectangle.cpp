#include <iostream>
#include "Rectangle.h"

using namespace std;

// default ctor
Rectangle::Rectangle() :
	m_w(0), m_h(0), m_x(0), m_y(0)
{}

// copy ctor
Rectangle::Rectangle(const Rectangle & other) :
	m_w(other.m_w), m_h(other.m_h), m_x(other.m_x), m_y(other.m_y)
{ }

Rectangle::Rectangle(int w, int h, int x, int y) :
	m_w(w), m_h(h), m_x(x), m_y(y)
{ }

// dtor...
Rectangle::~Rectangle()
{}

// other methods...
//...
void Rectangle::grow(int amount)
{
	m_w += amount;
	m_h += amount;
}

Rectangle & Rectangle::operator=(const Rectangle& other)
{
	m_w = other.m_w;
	m_h = other.m_h;
	m_x = other.m_x;
	m_y = other.m_y;
	return *this;
}

bool Rectangle::operator==(const Rectangle& other)
{
	if (&other == this)
		return true;

	return
	(	m_w == other.m_w &&
		m_h == other.m_h &&
		m_x == other.m_x &&
		m_y == other.m_y
	);
}

Rectangle Rectangle::operator+(int i) const
{
	Rectangle ret(m_w+i, m_h+i, m_x, m_y);
	return ret;
}

Rectangle Rectangle::operator-(int i) const
{
	Rectangle ret(m_w-i, m_h-i, m_x, m_y);
	return ret;
}

Rectangle & Rectangle::operator++()
{
	m_w++;
	m_h++;
	return *this;
}

Rectangle Rectangle::operator++(int i)
{
  Rectangle ret(m_w, m_h, m_x, m_y);
  m_w = m_w+1;
  m_h= m_h+1;
  return ret;
}

Rectangle & Rectangle::operator--()
{
	m_w--;
	m_h--;
	return *this;
}

Rectangle Rectangle::operator--(int i)
{
  Rectangle ret(m_w, m_h, m_x, m_y);
  m_w = m_w-1;
  m_h= m_h-1;
  return ret;
}

ostream & operator<<(ostream & os, const Rectangle & x)
{
	os << "I am a rectangle, here is my state:" << endl;
	os << "W="<< x.m_w << " H=" << x.m_h << " X=" << x.m_x << " Y=" << x.m_y << endl;
	return os;
}

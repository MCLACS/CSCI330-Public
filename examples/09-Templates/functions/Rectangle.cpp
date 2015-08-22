#include "Rectangle.h"

Rectangle::Rectangle(char ch, int x, int y, int w, int h) : m_ch(ch), m_x(x), 
	m_y(y), m_w(w), m_h(h)
{
}

int Rectangle::area() const
{
	return m_w * m_h;
}

int Rectangle::perimeter() const
{
	return m_w + m_h;
}

double Rectangle::contains(const Rectangle& other) const
{
	return ( (other.m_x >= m_x) && (other.m_y >= m_y) && 
		     (other.m_x + other.m_w) <= (m_x + m_w) && 
		     (other.m_y + other.m_h) <= (m_y + m_h));
}

bool operator>(const Rectangle& lhs, const Rectangle& rhs)
{ 
	return lhs.area() > rhs.area();
}

bool operator<(const Rectangle& lhs, const Rectangle& rhs)
{ 
	return lhs.area() < rhs.area();
}

bool operator>=(const Rectangle& lhs, const Rectangle& rhs)
{ 
	return lhs.area() >= rhs.area();
}

bool operator<=(const Rectangle& lhs, const Rectangle& rhs) 
{ 
	return lhs.area() <= rhs.area();
}

std::ostream& operator<<(std::ostream& os, const Rectangle& r)
{
	for (int yspace(0); yspace < r.m_y; yspace++)
	{
		os << std::endl;
	}

	for (int row(0); row < r.m_h; row++)
	{
		for (int xspace(0); xspace < r.m_x; xspace++)
		{
			os << " ";
		}
		for (int col(0); col < r.m_w; col++)
		{
			os << r.m_ch;
		}
		os << std::endl;
	}
	return os;
}
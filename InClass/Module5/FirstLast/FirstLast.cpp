#include "FirstLast.h"

FirstLast::FirstLast() : m_first(""), m_last("")
{}

FirstLast::FirstLast(const FirstLast & other) :
 	m_first(other.m_first), m_last(other.m_last)
{}

FirstLast::~FirstLast()
{}

void FirstLast::setFirst(const string & first)
{
	m_first = first;
}

void FirstLast::setLast(const string & last)
{
	m_last = last;
}

string FirstLast::fullName() const
{
	return m_first + " " + m_last;
}

string FirstLast::lastFirst() const
{
	return m_last + ", " + m_first;
}

string FirstLast::shortName() const
{
 	 return m_first.substr(0, 1) + ". " + m_last;
}

ostream & operator<<(ostream & os, const FirstLast & x)
{
	os << x.fullName();
	return os;
}

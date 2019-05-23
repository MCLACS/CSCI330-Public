#include <iostream>
#include <string>
#include "Box.h"

using namespace std;

Box::Box() : m_size(0)
{
	for (int i = 0; i < m_size; i++)
		m_contents[i] = "";
}

Box::Box(const Box & other)
{
	m_size = other.m_size;
	
	// m_contents = other.m_contents;
	
	for (int i = 0; i < m_size; i++)
		m_contents[i] = other.m_contents[i];
}

void Box::add(const string & item)
{
	if (m_size < MAX_SIZE)
	{
		m_contents[m_size] = item;
		m_size++;
	}
	else
	{
		throw "Box is full!";
	}
}

ostream & operator<< (ostream & os, const Box & box)
{
	os << "Size: " << box.m_size << endl;
	for (int i = 0; i < box.m_size; i++)
	{
		if (box.m_contents[i] != "")
			os << box.m_contents[i] << endl;
	}
	return os;
}

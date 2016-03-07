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

Box Box::operator+ (const Box & box) const
{
	Box ret;
	for (int i = 0; i < m_size; i++)
		ret.add(m_contents[i]);
	for (int i = 0; i < box.m_size; i++)
		ret.add(box.m_contents[i]);

	return ret;
}

string& Box::operator[](int i)
{
	if (i >= m_size)
		throw "Out of bounds exception";
	else
		return m_contents[i];
}

const string& Box::operator[](int i) const
{
	if (i >= m_size)
		throw "Out of bounds exception";
	else
		return m_contents[i];
}

Box & Box::operator=(const Box& other)
{
	m_size = other.m_size;
	for (int i = 0; i < m_size; i++)
		m_contents[i] = other.m_contents[i];
	return *this;
}

bool Box::operator==(const Box& other)
{
	if (&other == this)
		return true;

	if (m_size != other.m_size)
		return false;

	for (int i = 0; i < m_size; i++)
	{
		if (m_contents[i] != other.m_contents[i])
			return false;
	}

	return true;
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

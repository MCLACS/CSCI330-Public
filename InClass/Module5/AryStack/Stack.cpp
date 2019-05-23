#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

Stack::Stack() : m_size(0)
{
	m_ary = new string[m_size];
}

Stack::Stack(const Stack & other)
{
	for (int i = 0; i < other.m_size; i++)
	{
		grow();
		m_ary[i] = other.m_ary[i];
	}
}

Stack::~Stack()
{
	delete [] m_ary;
}

int Stack::size() const
{
	return m_size;
}

void Stack::push(const string & item)
{
	grow();
	m_ary[m_size-1] = item;
}

string Stack::pop()
{
	if (m_size == 0)
		throw "Stack Empty Error!";

	string ret = m_ary[m_size-1];
	shrink();
	return ret;
}

string Stack::peek() const
{
	if (m_size == 0)
		throw "Stack Empty Error!";
	return m_ary[m_size-1];
}

void Stack::grow()
{
	string * temp = new string[m_size+1];
	for (int i = 0; i < m_size; i++)
	{
		temp[i] = m_ary[i];
	}
	m_size = m_size+1;
	delete [] m_ary;
	m_ary = temp;
}

void Stack::shrink()
{
	m_size = m_size-1;
	string * temp = new string[m_size];
	for (int i = 0; i < m_size; i++)
	{
		temp[i] = m_ary[i];
	}
	delete [] m_ary;
	m_ary = temp;
}

ostream & operator <<(ostream & os, const Stack & s)
{
	for (int i = 0; i < s.m_size; i++)
		os << s.m_ary[i] << endl;
	return os;
}

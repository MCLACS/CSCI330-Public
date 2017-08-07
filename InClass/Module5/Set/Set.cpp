#include <vector>
#include <string>

#include "Set.h"
#include "../../../utilities/StringFunctions.h"

using namespace std;

Set::Set() : m_items()
{
}

int Set::size() const
{
	return m_items.size();
}

string Set::get(int index) const
{
	return m_items[index];
}

bool Set::contains(const string& item) const
{
	return find(item) != m_items.end();
}

bool Set::add(const string& item)
{
	bool ret = true;
	vector<string>::const_iterator it = find(item);
	if (it == m_items.end())
		m_items.push_back(item);
	else
		ret = false;
	return ret;
}

bool Set::remove(const string& item)
{
	bool ret = false;
	for (vector<string>::iterator it = m_items.begin(); 
			it!=m_items.end(); it++)
	{
		if (*it == item)
		{
			m_items.erase(it);
			ret = true;
			break;
		}
	}
	return ret;
}

void Set::removeAll()
{
	m_items.clear();
}

void Set::operator!()
{
	for (vector<string>::iterator it = m_items.begin(); 
		it!=m_items.end(); it++)
	{
		string upper = StringFunctions::toupper(*it);
		*it = upper;
	}
}

// intersection
Set operator*(const Set& lhs, const Set& rhs)
{
	Set ret;
	for (vector<string>::const_iterator it = lhs.m_items.cbegin(); 
			it!=lhs.m_items.cend(); it++)
	{
		if (rhs.contains(*it))
			ret.m_items.push_back(*it);
	}	

	return ret;
}

// difference
Set operator-(const Set& lhs, const Set& rhs)
{
	Set ret;
	for (vector<string>::const_iterator it = lhs.m_items.cbegin(); 
			it!=lhs.m_items.cend(); it++)
	{
		if (!rhs.contains(*it))
			ret.add(*it);
	}	

	return ret;
}

// union
Set operator+(const Set& lhs, const Set& rhs)
{
	Set ret;
	for (vector<string>::const_iterator it = lhs.m_items.cbegin(); 
			it!=lhs.m_items.cend(); it++)
	{
		ret.add(*it);
	}	

	for (vector<string>::const_iterator it = rhs.m_items.cbegin(); 
			it!=rhs.m_items.cend(); it++)
	{
		ret.add(*it);
	}	

	return ret;
}

std::ostream& operator<<(std::ostream& os, const Set& s)
{
	for (vector<string>::const_iterator it = s.m_items.cbegin(); 
			it!=s.m_items.cend(); it++)
	{
		os << *it << " ";
	}
	os << endl;
	return os;
}

vector<string>::const_iterator Set::find(const string& item) const
{
	vector<string>::const_iterator it = m_items.cbegin();
	for (it=m_items.cbegin(); it!=m_items.cend(); it++)
	{
		if (*it == item)
		{
			break;
		}
	}		
	return it;
}

#ifndef MAXMINFINDER_H
#define MAXMINFINDER_H

#include <vector>

using namespace std;

template <class T>
class MaxMinFinder
{
public:
	MaxMinFinder(T item) : m_max(item), m_min(item) {}

	void test(T item)
	{
		if (item < m_min)
			m_min = item;
		
		if (item > m_max)
			m_max = item;
	}

	void test(vector<T> items)
	{
		for (typename vector<T>::iterator it = items.begin(); 
				it < items.end(); it++)
		{
			test(*it);
		}
	}

	T max()
	{ return m_max; }

	T min() 
	{ return m_min; }


private:
	T m_max;
	T m_min;
};

#endif
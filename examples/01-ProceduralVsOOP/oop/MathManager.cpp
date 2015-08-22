#include "MathManager.h"
#include <vector>
#include <climits>

MathManager::MathManager(int size) : m_size(size), m_numbers()
{
}

void MathManager::readNumbers()
{
	m_numbers.clear();
	std::cout << "Enter " << m_size << " numbers:" << std::endl;
	for (int i(0); i < m_size; i++)
	{
		int num(0);
		(std::cin >> num).get();
		m_numbers.push_back(num);
	}
}

int MathManager::max() const
{
	int max(INT_MIN);
	for (std::vector<int>::const_iterator it =m_numbers.begin(); 
			it != m_numbers.end(); it++)
	{
		if (*it > max)
			max = *it;
	}
	if (max == INT_MIN)
		max = 0;
	return max;
}

int MathManager::sum() const
{
	int total(0);
	for (std::vector<int>::const_iterator it =m_numbers.begin(); 
			it != m_numbers.end(); it++)
	{
		total += *it;
	}
	return total;	
}

double MathManager::average() const
{
	double ave(0);
	if (m_numbers.size() > 0)
		ave = sum()/m_numbers.size();	
	return ave;
}

std::ostream& operator<<(std::ostream& os, const MathManager& mgr)
{
	os << "Numbers: ";
	for (std::vector<int>::const_iterator it = mgr.m_numbers.begin(); 
			it != mgr.m_numbers.end(); it++)
	{
		os << *it << " ";
	}
	os << std::endl;
	return os;
}
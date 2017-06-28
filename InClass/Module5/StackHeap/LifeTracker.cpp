#include "LifeTracker.h"
#include <iostream>
#include <string>

LifeTracker::LifeTracker(const std::string& name) : m_name(name)
{
	std::cout << "Push " << m_name << std::endl;
}

LifeTracker::~LifeTracker()
{
	std::cout << "Pop " << m_name << std::endl;
}
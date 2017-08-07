#include "AttributeTracker.h"
#include <iostream>
#include <string>

AttributeTracker::AttributeTracker() : m_lt1("Attr1"), m_lt2("Attr2")
{
	std::cout << "Push AttributeTracker" << std::endl;
}

AttributeTracker::~AttributeTracker()
{
	std::cout << "Pop AttributeTracker" << std::endl;
}
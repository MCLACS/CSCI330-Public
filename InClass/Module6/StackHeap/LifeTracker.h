#ifndef LIFETRACKER_H
#define LIFETRACKER_H

#include <string>

class LifeTracker
{

public:
	LifeTracker(const std::string& name);
	virtual ~LifeTracker();

private:
	std::string m_name;

};

#endif
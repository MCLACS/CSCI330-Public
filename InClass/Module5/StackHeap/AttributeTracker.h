#ifndef ATTRIBUTETRACKER_H
#define ATTRIBUTETRACKER_H

#include "LifeTracker.h"
#include <string>


class AttributeTracker
{

public:
	AttributeTracker();
	virtual ~AttributeTracker();

private:
	LifeTracker m_lt1;
	LifeTracker m_lt2;

};

#endif
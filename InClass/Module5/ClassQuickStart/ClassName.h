#ifndef CLASSNAME_H
#define CLASSNAME_H

#include <iostream>

using namespace std;

class CLASSNAME
{
private:
	// class state ...
	TYPE m_ATTRIBUTE_NAME;
	TYPE m_ATTRIBUTE_NAME;

public:
	// behavior...

	CLASSNAME(); // default ctor
	CLASSNAME(const CLASSNAME & other); // copy ctor

	virtual ~CLASSNAME(); // destructor

	// additional methods
	// ...

	// operator overloads
	friend ostream & operator<<(ostream & os, const CLASSNAME & x);
};

// prototype for the global operator<< function
ostream & operator<<(ostream & os, const CLASSNAME & x);

#endif

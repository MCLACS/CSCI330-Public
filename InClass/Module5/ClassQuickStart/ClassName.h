#ifndef `CLASSNAME`_H
#define `CLASSNAME`_H

#include <iostream>

using namespace std;

class `CLASSNAME`
{
private:
	// class state ...
	`TYPE` m_`ATTRIBUTE_NAME`;
	`TYPE` m_`ATTRIBUTE_NAME`;

public:
	// behavior...

	`CLASSNAME`(); // default ctor
	`CLASSNAME`(const `CLASSNAME` & other); // copy ctor

	virtual ~`CLASSNAME`(); // destructor

	// additional methods
	// ...

	// operator overloads
	`CLASSNAME` & operator=(const `CLASSNAME`& other);
	bool operator==(const `CLASSNAME`& other);
	friend ostream & operator <<(ostream & os, const `CLASSNAME` & x);
};

// prototype for the global operator<< function
ostream & operator << (ostream & os, const `CLASSNAME` & x);

#endif

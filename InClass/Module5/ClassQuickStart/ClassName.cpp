#include <iostream>
#include "`CLASSNAME`.h"

using namespace std;

// default ctor
`CLASSNAME`::`CLASSNAME`() :
	`ATTRIBUTE_NAME`(`INITIAL_VALUE`), `ATTRIBUTE_NAME`(`INITIAL_VALUE`)
{

}

// copy ctor
`CLASSNAME`::`CLASSNAME`(const `CLASSNAME` & other) :
	`ATTRIBUTE_NAME`(`INITIAL_VALUE`), `ATTRIBUTE_NAME`(`INITIAL_VALUE`)
{

}

// dtor...
`CLASSNAME`::~`CLASSNAME`()
{

}

// other methods...
//...
`CLASSNAME` & `CLASSNAME`::operator=(const `CLASSNAME`& other)
{
	// copy all the attibutes over from other to this...

	return *this;
}

bool `CLASSNAME`::operator==(const `CLASSNAME`& other)
{
	if (&other == this)
		return true;

	// otherwise compare attributes...

	return true;
}

ostream & operator<< (ostream & os, const `CLASSNAME` & x)
{

	return os;
}

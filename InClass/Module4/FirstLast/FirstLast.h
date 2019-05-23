#ifndef FIRSTLAST_H
#define FIRSTLAST_H

#include <iostream>
#include <string>

using namespace std;

class FirstLast
{
private:
	// class state ...
	string m_first;
	string m_last;

public:
	// behavior...

	FirstLast(); // default ctor
	FirstLast(const FirstLast & other); // copy ctor

	virtual ~FirstLast(); // destructor

	// additional methods
	// ...
	void setFirst(const string & first);
	void setLast(const string & last);

	string fullName() const;
	string lastFirst() const;
	string shortName() const;

	// operator overloads
	friend ostream & operator<<(ostream & os, const FirstLast & x);
};

// prototype for the global operator<< function
ostream & operator<<(ostream & os, const FirstLast & x);

#endif

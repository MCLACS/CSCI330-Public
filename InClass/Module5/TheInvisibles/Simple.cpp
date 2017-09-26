#include "Simple.h"

#include <iostream>
using namespace std;

Simple::Simple()
{
	cout << "Default constructor called!" << endl;
}

Simple::Simple(const Simple & other)
{
	cout << "Copy constructor called!" << endl;
}

Simple & Simple::operator=(const Simple& other)
{
	cout << "Equals operator called!" << endl;
	return *this;
}

Simple::~Simple()
{
	cout << "Destructor called!" << endl;
}

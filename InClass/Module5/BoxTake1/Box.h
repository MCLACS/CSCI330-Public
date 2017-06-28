#ifndef BOX_H
#define BOX_H

#include <iostream>
#include <string>

using namespace std;

const int MAX_SIZE = 10;

class Box
{
private:
	int m_size;
	string m_contents[MAX_SIZE];

public:
	Box();
	Box(const Box & other);
	void add(const string & item);
	friend ostream & operator << (ostream & os, const Box & box);
};

ostream & operator<< (ostream & os, const Box & box);

#endif

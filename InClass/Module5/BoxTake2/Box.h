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
	virtual ~Box() {};
	int size() { return m_size; }
	void add(const string & item);
	Box operator +(const Box & box) const;
	string& operator[](int i);
	const string& operator[](int i) const;
	Box & operator=(const Box& other);
	bool operator==(const Box& other);
	friend ostream & operator <<(ostream & os, const Box & box);
};

ostream & operator << (ostream & os, const Box & box);

#endif

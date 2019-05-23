#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <string>
#include "Node.h"

using namespace std;

class Stack
{
private:
	Node * m_head;

public:
	Stack();
	Stack(const Stack & other);
	virtual ~Stack();
	int size() const;
	void push(const string & item);
	string pop();
	string peek() const;
	friend ostream & operator <<(ostream & os, const Stack & s);
};

ostream & operator << (ostream & os, const Stack & s);

#endif

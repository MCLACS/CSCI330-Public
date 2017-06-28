#ifndef NODE_H
#define NODE_H

#include <string>

using namespace std;

const int MAX_SIZE = 10;

class Node
{
private:
	string m_value;
	Node * m_next;
	Node();
	Node(const Node & other);
	Node & operator=(const Node& other);

public:
	Node(const string & value) : m_value(value), m_next(NULL) {}
	virtual ~Node() {};
	string getValue() const { return m_value; }
	Node * getNext() const { return m_next; }
	void setValue(const string & value) { m_value = value; }
	void setNext(Node * next) { m_next = next; }
};

#endif

#include <iostream>
#include <string>
#include "Stack.h"
#include "Node.h"

using namespace std;

Stack::Stack() : m_head(new Node("HEAD"))
{ }

Stack::Stack(const Stack & other)
{

}

Stack::~Stack()
{
	Node * n = m_head;
	while (n->getNext() != NULL)
	{
		Node *temp = n->getNext();
		n = n->getNext();
		delete temp;
	}
	delete m_head;
}

int Stack::size() const
{
	int size = 0;
	Node * n = m_head;
	while (n->getNext() != NULL)
	{
		size++;
		n = n->getNext();
	}
	return size;
}

void Stack::push(const string & item)
{
	Node * n = m_head;
	while (n->getNext() != NULL)
		n = n->getNext();
	Node * n2 = new Node(item);
	n->setNext(n2);
}

string Stack::pop()
{
	if (m_head->getNext() == NULL)
		throw "Stack Empty Error!";

	string ret = "";
	Node * n = m_head;
	Node * p = NULL;
	while (n->getNext() != NULL)
	{
		p = n;
		n = n->getNext();
	}
	ret = n->getValue();
	delete n;
	p->setNext(NULL);
	return ret;
}

string Stack::peek() const
{
	if (m_head->getNext() == NULL)
		throw "Stack Empty Error!";
	Node * n = m_head;
	while (n->getNext() != NULL)
		n = n->getNext();
	return n->getValue();
}

ostream & operator <<(ostream & os, const Stack & s)
{
	os << "BOTTOM" << endl;
	Node * n = s.m_head;
	while (n->getNext() != NULL)
	{
		n = n->getNext();
		os << n->getValue() << endl;
	}
	os << "TOP" << endl;

	return os;
}

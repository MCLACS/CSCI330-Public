#ifndef STACK_H
#define STACK_H

#include <vector>
#include <string>

using namespace std;

template <class T>
class Stack
{
public:
	Stack() : m_items() {}

	void push(T item)
	{
		m_items.push_back(item);
	}

	T pop() 
	{
		T ret = peek();
		m_items.erase(m_items.end()-1);
		return ret;
	};

	T peek() const 
	{
		if (size() == 0)
			throw string("stack empty!");
		return *(m_items.end()-1);		
	};

	void clear() 
	{
		m_items.clear();
	};

	int size() const
	{
		return m_items.size();
	};

	bool isEmpty() const
	{
		return size() == 0;
	}

	void reverse()
	{
		// students do this...
	}

private:
	vector<T> m_items;
};

#endif
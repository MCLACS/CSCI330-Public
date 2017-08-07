#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

using namespace std;

class Rectangle
{
private:
	// class state ...
	int m_w;
	int m_h;
	int m_x;
	int m_y;

public:
	// behavior...

	Rectangle(); // default ctor
	Rectangle(const Rectangle & other); // copy ctor
	Rectangle(int w, int h, int x, int y);

	virtual ~Rectangle(); // destructor

	// additional methods
	// ...
	void grow(int amount);

	// operator overloads
	Rectangle & operator=(const Rectangle& other);
	bool operator==(const Rectangle& other);

	Rectangle operator+(int i) const;
	Rectangle operator-(int i) const;
   
	Rectangle & operator++(); // ++r
	Rectangle operator++(int i); // r++
	
	Rectangle & operator--(); // ++r
	Rectangle operator--(int i); // r++	
	
	friend ostream & operator<<(ostream & os, const Rectangle & x);
};

// prototype for the global operator<< function
ostream & operator<<(ostream & os, const Rectangle & x);

#endif

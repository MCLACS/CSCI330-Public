#ifndef SIMPLE_H
#define SIMPLE_H

class Simple
{
public:
	Simple();
	Simple(const Simple & other);
	Simple & operator=(const Simple& other);
	virtual ~Simple();
};

#endif

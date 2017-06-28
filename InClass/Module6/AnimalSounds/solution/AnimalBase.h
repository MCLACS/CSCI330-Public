#ifndef ANIMAL_BASE_H
#define ANIMAL_BASE_H

#include <iostream>

using namespace std;

class AnimalBase
{
public:
	virtual void speak() = 0;
};

class Dog : public AnimalBase
{
public:
	virtual void speak()
	{ cout << "Bark!" << endl; }	
};

class Frog : public AnimalBase
{
public:
	virtual void speak()
	{ cout << "Croak!" << endl; }
};

class Duck : public AnimalBase
{
public:
	virtual void speak()
	{ cout << "Quack!" << endl; }
};

#endif
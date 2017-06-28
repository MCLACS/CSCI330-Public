#ifndef POLITICIAN_TYPES
#define POLITICIAN_TYPES

#include <iostream>

using namespace std;

class Politician
{
public:
	Politician()
	{ cout << "ordinary politican created" << endl; }

	void speak()
	{ cout << "I promise to do my best" << endl; }
};

class GoodPolitician : public Politician
{
public:
	GoodPolitician()
	{ cout << "good politican created" << endl; }

	void speak()
	{ 
		cout << "I promise to say whatever I have " 
		<< "to so I get elected" << endl; 
	}
};

class GreatPolitician : public GoodPolitician
{
public:
	GreatPolitician()
	{ cout << "great politican created" << endl; }

	void speak()
	{ 
		cout << "I promise to do whatever I my " 
		<< "wealthy supports ask me to do" << endl; 
	}
};

#endif
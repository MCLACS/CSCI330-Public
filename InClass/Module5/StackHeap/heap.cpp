#include "LifeTracker.h"
#include "AttributeTracker.h"

LifeTracker * p1 = new LifeTracker("one");

void foo()
{
	LifeTracker * pFoo = new LifeTracker("foo");
	delete pFoo;
}

int main(int argc, char * argv[])
{
	AttributeTracker * pAt = new AttributeTracker();

	foo();
	LifeTracker * p2 = new LifeTracker("two");

	{
		LifeTracker * p3 = new LifeTracker("three");
		{
			LifeTracker * p4 = new LifeTracker("four");
			foo();
			delete p4;
		}
		delete p3;
	}

	LifeTracker * p5 = new LifeTracker("five");

	foo();

	delete p5; 
	delete p2;
	delete pAt;
	delete p1;
}
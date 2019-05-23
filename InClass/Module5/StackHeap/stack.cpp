#include "LifeTracker.h"
#include "AttributeTracker.h"

LifeTracker m1("one");

void foo() 
{
	LifeTracker mFoo("foo");
}

int main(int argc, char * argv[])
{
	AttributeTracker at;

	foo();
	LifeTracker m2("two");
	{
		LifeTracker m3("three");
		{
			LifeTracker m4("four");
			foo();
		}
	}

	LifeTracker m5("five");

	foo();
}
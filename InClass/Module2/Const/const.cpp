#include <iostream>
#include <string>

using namespace std;

void changeIntRef(const int& i);
void changeStringRef(const string& s);

string& pluralize(const string& s);

int main(int argc, char * argv[])
{
	int i(10);
	changeIntRef(i);
	cout << i << endl;

	string s("Run");
	changeStringRef(s);
	cout << s << endl;

	s = pluralize("Apple");
	cout << s << endl;
}

void changeIntRef(const int& i)
{
	//i = 100; // causes a compile error because i is a const reference
}

void changeStringRef(const string& s)
{
	//s = s + " fast!"; // causes a compile error because s is a const reference
}

string& pluralize(const string& s)
{
	// causes a run time error because we are returning 
	// a reference to a local variable...
	
	// string ret(s+"s"); 
	// return ret;
}
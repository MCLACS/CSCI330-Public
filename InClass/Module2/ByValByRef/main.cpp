#include <iostream>
#include <string>

using namespace std;

void changeInt(int i);
void changeIntRef(int& i);

void changeString(string s);
void changeStringRef(string& s);

int main()
{
	int i = 10;
	changeInt(i);
	cout << i << endl;

	i = 10;
	changeIntRef(i);
	cout << i << endl;

	string s("Run");
	changeString(s);
	cout << s << endl;

	s = "Run";
	changeStringRef(s);
	cout << s << endl;
}

void changeInt(int i)
{
	i = 100;
}

void changeIntRef(int& i)
{
	i = 100;
}

void changeInt(int * pI)
{
	*pI = 100;
}

void changeString(string s)
{
	s = " fast!";
}

void changeStringRef(string& s)
{
	s = s + " fast!";
}
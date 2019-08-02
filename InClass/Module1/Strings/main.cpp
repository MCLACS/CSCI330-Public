#include <iostream>
#include <cstring>
#include <string>

#include "../../../utilities/UserInput.h"

int calcLength(char s[]);

using namespace std;

int main()
{
	// c strings...
	
	char cs1[] = "Hello";
	char cs2[] = "Bye";
	
	cout << "cs1 = " << cs1 << endl;
	cout << "cs2 = " << cs2 << endl;
	cout << "Length of cs1 = " << calcLength(cs1) << "/" << strlen(cs1) << endl;
	
	char cs3[strlen(cs1) + strlen(cs2) + 1];
	cs3[0] = 0;	
	cout << "strlen(cs3) = " << strlen(cs3) << endl;
	cout << "sizeof(cs3) = " << sizeof(cs3) << endl;
	
	strncat(cs3, cs1, strlen(cs1));
	strncat(cs3, cs2, strlen(cs2));
	cout << "cs1 + cs2 = " << cs3 << endl; 
	 
	cout << endl;
	
	
	// c++ strings
		 
	string s1("Hello");
	string s2("Bye");
	string s3;
	
	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
	cout << "Length of s1 = " << s1.size() << endl;
	
	s3 = s1 + s2;
	cout << "s1 + s2 = " << s3 << endl;
	
	UserInput in; 
	string name1 = in.readString("Enter your name: ");
	cout << "Hello " << name1 << endl;
	
	try
	{
		string sAge(in.readString("Enter your age: "));
		int iAge = stoi(sAge);
		cout << "You are " << iAge << " years old." << endl; 
	}
	catch (std::invalid_argument err)
	{
		cout << "Invalid age" << endl;
	}
}

int calcLength(char s[])
{
	int i(0);
	while (s[i] != 0)
		i++;
	return i;
}
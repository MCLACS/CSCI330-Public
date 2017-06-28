#include "Set.h"
#include <iostream>
using namespace std;

int main()
{
	Set s1;
	s1.add("hello");
	s1.add("bye");

	Set s2;
	s2.add("hello");
	s2.add("run");

	Set s3 = s1 + s2;
	Set s4 = s1 - s2;
	Set s5 = s1 * s2;

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << s5 << endl;

	!s1;
	cout << s1 << endl;
}
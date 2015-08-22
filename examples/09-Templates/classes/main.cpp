#include "Stack.h"
#include "MaxMinFinder.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	Stack<int> s;
	s.push(10);
	s.push(100);
	s.push(5);

	Stack<int> s2(s);

	cout << "Stack has " << s.size() << " items" << endl;
	cout << "Peeking at the top yeilds " << s.peek() << endl;

	cout << "Popping all items off the stack: " << endl;
	while (!s.isEmpty())
		cout << s.pop() << endl;

	s2.reverse();
	
	cout << "Popping all items off the reversed stack: " << endl;
	while (!s2.isEmpty())
		cout << s2.pop() << endl;

	MaxMinFinder<string> finder("bird");
	finder.test("cat");
	finder.test("but");
	finder.test("snake");
	cout << "Max/Min: " << finder.max() << " " << finder.min() << endl;

	vector<string> strings;
	strings.push_back("ant");
	strings.push_back("leopard");
	finder.test(strings);
	cout << "Max/Min: " << finder.max() << " " << finder.min() << endl;
}
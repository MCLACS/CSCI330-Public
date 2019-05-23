#ifndef SET_H
#define SET_H

#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Set
{
public:
	Set();
	int size() const;
	string get(int index) const;
	bool contains(const string& item) const;
	bool add(const string& item);
	bool remove(const string& item);
	void removeAll();
	void operator!();

	friend Set operator*(const Set& lhs, const Set& rhs); // intersection
	friend Set operator-(const Set& lhs, const Set& rhs); // difference
	friend Set operator+(const Set& lhs, const Set& rhs); // union
	friend std::ostream& operator<<(std::ostream& os, const Set& s);

private:
	vector<string>::const_iterator find(const string& item) const;
	vector<string> m_items;
};


#endif
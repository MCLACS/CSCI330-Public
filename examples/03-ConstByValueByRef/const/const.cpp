#include <iostream>
#include <string>

void changeIntRef(const int& i);
void changeStringRef(const std::string& s);

std::string& pluralize(const std::string& s);

int main(int argc, char * argv[])
{
	int i(10);
	changeIntRef(i);
	std::cout << i << std::endl;

	std::string s("Run");
	changeStringRef(s);
	std::cout << s << std::endl;

	s = pluralize("Apple");
	std::cout << s << std::endl;
}

void changeIntRef(const int& i)
{
	//i = 100; // causes a compile error because i is a const reference
}

void changeStringRef(const std::string& s)
{
	//s = s + " fast!"; // causes a compile error because s is a const reference
}

std::string& pluralize(const std::string& s)
{
	std::string ret(s+"s");
	return ret;
}
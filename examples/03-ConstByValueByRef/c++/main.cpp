#include <iostream>
#include <string>

void changeInt(int i);
void changeIntRef(int& i);
void changeInt(int * pI);

void changeString(std::string s);
void changeStringRef(std::string& s);
void changeString(std::string * pS);

int main(int argc, char * argv[])
{
	int i = 10;
	changeInt(i);
	std::cout << i << std::endl;

	i = 10;
	changeIntRef(i);
	std::cout << i << std::endl;

	i = 10;
	changeInt(&i);
	std::cout << i << std::endl;

	std::string s("Run");
	changeString(s);
	std::cout << s << std::endl;

	s = "Run";
	changeStringRef(s);
	std::cout << s << std::endl;

	s = "Run";
	changeString(&s);
	std::cout << s << std::endl;
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

void changeString(std::string s)
{
	s = " fast!";
}

void changeStringRef(std::string& s)
{
	s = s + " fast!";
}

void changeString(std::string * pS)
{
	*pS = *pS + " fast!";
}
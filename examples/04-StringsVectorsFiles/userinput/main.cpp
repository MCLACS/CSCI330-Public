#include <iostream>
#include <string>

void checkForError()
{
	if (std::cin.fail())
	{
		std::cin.clear();
		throw std::string("bad input");
	}
}

int main(int argc, char * argv[])
{
	std::cout << "Thanks for running " << argv[0] << std::endl;
	
	try
	{
		int i1(0);
		std::cout << "Enter an integer: ";			
		std::cin >> i1;
		std::cin.ignore(1000, '\n');
		checkForError();
		std::cout << "You entered " << i1 << std::endl;

		int i2(0);
		std::cout << "Enter another integer: ";
		(std::cin >> i2).ignore(1000, '\n');
		checkForError();
		std::cout << "You entered " << i2 << std::endl;

		double d(0.0);
		std::cout << "Enter a double: ";
		(std::cin >> d).ignore(1000, '\n');
		checkForError();
		std::cout << "You entered " << d << std::endl;

		char ch(' ');
		std::cout << "Enter a character: ";
		(std::cin >> ch).ignore(1000, '\n');
		checkForError();
		std::cout << "You entered " << ch << std::endl;

		std::string s;
		std::cout << "Enter a string: ";
		getline(std::cin, s);
		checkForError();
		std::cout << "You entered " << s << std::endl;
	}
	catch (const std::string& err)
	{
		std::cout << "User input error: " << err << std::endl;
	}
}
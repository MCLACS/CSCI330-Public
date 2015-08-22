#include "FileReader.h"
#include "StringFunctions.h"

#include <iostream>
#include <vector>
#include <string>

int main(int argc, char * argv[])
{
	std::vector<std::string> strings;
	try
	{
		FileReader in("strings.txt");
		while (!in.endOfFile())
		{
			std::string line = in.readLine();
			if (line.size() > 0)
			{
				strings.push_back(line);

			}
		}
	
		for (std::vector<std::string>::iterator it=strings.begin(); 
				it!=strings.end(); it++)	
		{
			std::string line = *it;
			if (line[0] != 'A')
			{
				strings.erase(it);
				it--;
			}
			else
			{
				*it = StringFunctions::toupper(line);
			}
		}

		for (std::vector<std::string>::iterator it=strings.begin(); 
				it!=strings.end(); it++)	
		{
			std::cout << StringFunctions::reverse(*it) << std::endl;
		}
	}
	catch (std::string err)
	{
		std::cout << "Error: " << err << std::endl;
	}

	std::vector<std::string> v = StringFunctions::split(std::string("a b c"), std::string(" "));
	for (std::vector<std::string>::iterator it=v.begin(); 
				it!=v.end(); it++)
	{
		std::cout << "token: " << (*it) << std::endl;
	}
	
}
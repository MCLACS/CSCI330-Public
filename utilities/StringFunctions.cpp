#include "StringFunctions.h"
#include <string>
#include <locale>

std::string StringFunctions::reverse(const std::string& s)
{
	std::locale loc;
	std::string ret("");
	for (std::string::const_reverse_iterator it=s.crbegin(); it!=s.crend(); it++)
	{
		ret.append(std::string(1,*it));
	}
	return ret;
}

std::string StringFunctions::toupper(const std::string& s)
{
	std::locale loc;
	std::string ret("");
	for (std::string::const_iterator it=s.cbegin(); it!=s.cend(); it++)
	{
		char ch = std::toupper(*it, loc);
		ret.append(std::string(1,ch));
	}
	return ret;
}

std::string StringFunctions::tolower(const std::string& s)
{
	std::locale loc;
	std::string ret("");
	for (std::string::const_iterator it=s.cbegin(); it!=s.cend(); it++)
	{
		char ch = std::tolower(*it, loc);
		ret.append(std::string(1,ch));
	}
	return ret;
}

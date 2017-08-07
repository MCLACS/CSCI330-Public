#ifndef STRINGFUNCTIONS_H
#define STRINGFUNCTIONS_H

#include <string>

class StringFunctions
{
public: 
	static std::string reverse(const std::string& s);
	static std::string toupper(const std::string& s);
	static std::string tolower(const std::string& s);

private:
	 StringFunctions() {};
};

#endif
	

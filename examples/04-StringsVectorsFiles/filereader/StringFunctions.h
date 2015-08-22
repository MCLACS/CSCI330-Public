#ifndef STRINGFUNCTIONS_H
#define STRINGFUNCTIONS_H

#include <string>
#include <vector>

class StringFunctions
{
public: 
	static std::string reverse(const std::string& s);
	static std::string toupper(const std::string& s);
	static std::string tolower(const std::string& s);
	static std::vector<std::string> split(const std::string& s, 
		const std::string& pat);

private:
	 StringFunctions() {};
};

#endif
	

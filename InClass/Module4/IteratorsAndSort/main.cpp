#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>
#include <string>

using namespace std;

int main()
{
  	char ary[] = "MCLA ALL THE WAY!";
  	char * abegin = ary;
  	char * aend = (ary+strlen(ary));
  	
	vector<char> vChars(abegin, aend);
  	vector<char>::iterator vbegin = vChars.begin();
	vector<char>::iterator vend = vChars.end();

  	string sChars(abegin);
	string::iterator sbegin = sChars.begin();
	string::iterator send = sChars.end();
  	
  	for (char * p = abegin; p != aend; p++)
		cout << *p;
	cout << endl;
	
	for (vector<char>::iterator p = vbegin; p != vend; p++)
		cout << *p;
	cout << endl;

	for (string::iterator p = sbegin; p != send; p++)
		cout << *p;
	cout << endl;

	sort(abegin, aend);
  	for (char * p = abegin; p != aend; p++)
		cout << *p;
	cout << endl;

	sort(vbegin, vend);
	for (vector<char>::iterator p = vbegin; p != vend; p++)
		cout << *p;
	cout << endl;

	sort(sbegin, send);
	for (string::iterator p = sbegin; p != send; p++)
		cout << *p;
	cout << endl;


	return 0;
}

#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>
#include <string>

using namespace std;

int main()
{
  char ary[] = "MCLA ALL THE WAY!";
	vector<char> vChars(ary, ary+strlen(ary));
  string sChars(ary);

  char * abegin = ary;
  char * aend = (ary+strlen(ary));
  for (char * p = abegin; p != aend; p++)
		cout << *p;
	cout << endl;

	vector<char>::iterator vbegin = vChars.begin();
	vector<char>::iterator vend = vChars.end();
	for (vector<char>::iterator p = vbegin; p != vend; p++)
		cout << *p;
	cout << endl;

	string::iterator sbegin = sChars.begin();
	string::iterator send = sChars.end();
	for (string::iterator p = sbegin; p != send; p++)
		cout << *p;
	cout << endl;  

	sort(ary, ary+strlen(ary));
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

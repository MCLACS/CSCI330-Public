#include <iostream>
#include <cstring>

using namespace std;

int length(const char * str);
void cat(const char * str1, const char * str2, char * out);

int main()
{
    const char * hello = "hello";

    for (int i(0); i < 6; i++)
      cout << "'" << hello[i] <<  "' ";
    cout << endl;

    for (int i(0); i < 6; i++)
      cout << "'" << (int)hello[i] <<  "' ";
    cout << endl;

    char hello2[6] = {'h', 'e', 'l', 'l', 'o', (char)0};

    for (int i(0); i < 6; i++)
      cout << "'" << hello2[i] <<  "' ";
    cout << endl;

    for (int i(0); i < 6; i++)
      cout << "'" << (int)hello2[i] <<  "' ";
    cout << endl;

    cout << "Length of hello = " << length(hello) << endl;
    cout << "Length of hello2 = " << length(hello2) << endl;

    cout << "Length of hello = " << strlen(hello) << endl;
    cout << "Length of hello2 = " << strlen(hello2) << endl;

    char greeting[100];
    cat("hello ", " sir!", greeting);
    cout << "'" << greeting << "'" << endl;
}

int length(const char * str)
{
  int len = 0;
  while (str[len++] != (char)0);
  return len;
}

void cat(const char * str1, const char * str2, char * out)
{
  int i(0);
  int j(0);
  while (str1[i] != (char)0)
  {
    out[j++] = str1[i++];
  }

  i = 0;
  while (str2[i] != (char)0)
  {
    out[j++] = str2[i++];
  }

  out[j] = (char)0;

}

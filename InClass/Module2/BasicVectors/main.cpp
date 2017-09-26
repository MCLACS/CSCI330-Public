#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> v1;
    vector<string> v2;
    
    v1.push_back(1);
    v1.push_back(10);
    v1.push_back(100);
    
    v2.push_back("one");
    v2.push_back("ten");
    v2.push_back("one hundred");
    
    v2[2] = "one hundred!";
    
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " is " << v2[i] << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Takla";
    string s1;
    s1 = s;
    cout << s1 << endl;
    char Name[5]={'a','b','\0','c','d'};
    s1.push_back('\0');
    s1.push_back('a');
    cout << s1 << endl;
    cout << Name << endl;
    return 0;
}
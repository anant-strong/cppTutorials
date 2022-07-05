#include <bits/stdc++.h>
using namespace std;
bool valid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    return 0;
}
char toLowercase(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string name, int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        if (name[s] != name[e])
        {
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}

bool isPalindrome(string s)
{
    string temp = "";

    // for valid character entry
    for (int j = 0; j < s.length(); j++)
    {
        if (valid(s[j]))
        {
            temp.push_back(s[j]);
        }
    }

    // for lowercase
    for (int i = 0; i < temp.length(); i++)
    {
        temp[i] = toLowercase(temp[i]);
    }

    return checkPalindrome(temp, temp.length());
}
int main()
{
    string s;
    cin >> s;
    if (isPalindrome(s))
    {
        cout << "Palindrome" << endl;
    }
}
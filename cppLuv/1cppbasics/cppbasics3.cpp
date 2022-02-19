#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c = 'a'; // ascii values is stored for each char in cpp
    char b = 'c';
    cout << (int) c << endl; // typecasting -> we converted char to int now it will convert c in int and return value i.e. ASCII value
    cout << c - b; // as ASCII value for a is 97 and c is 99

    return 0;
}
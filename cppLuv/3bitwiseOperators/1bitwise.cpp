#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 2, b = 3;

    cout << "a & b: " << (a & b) << endl;
    cout << "a | b: " << (a | b) << endl;
    cout << "~a: " << ~a << endl;
    a = 5;
    b = 7;
    cout << "a ^ b: " << (a ^ b) << endl;
    cout << "a <<1 : " << (a << 1) << endl;
    cout << "a >> 2 : " << (a >> 2) << endl;

    cout << " 17 >> 1: " << (17 >> 1) << endl;
    cout << "17 >> 2: " << (17 >> 2) << endl;
    cout << "19 << 1: " << (19 << 1) << endl;
    cout << "21 << 2: " << (21 << 2) << endl;

    return 0;
}
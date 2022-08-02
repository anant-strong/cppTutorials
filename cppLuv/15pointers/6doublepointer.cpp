#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 5;
    int *p = &i;

    int **p2 = 0;
    p2 = &p;
    cout << "Inside p: " << p << endl;
    cout << "address of p: " << &p<< endl;
    cout << "star p: " << *p << endl;
    cout << "Inside p2: " << p2 << endl;
    cout << "star p2: " << *p2 << endl;
    cout << "star star p2 : " << **p2 << endl;
    cout << "address of p2 : " << &p2 << endl;

    return 0;
}
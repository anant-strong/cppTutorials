#include <bits/stdc++.h>// standalone library for all libraries which may be used in competetive programming

using namespace std;

int main()
{
    int a = 3;
    char c = 'a';
    double d = 4.7;
    bool l = true;// it will print 1
    l = 123; // in cpp every other thing it will take as true except 0, so it will also print true
    a = 7.7; //if try to store decimal in int var it prints integer of back i.e. 7
    cout << a << " " << c << " " << d << endl;
    cout << l;
    return 0;
}
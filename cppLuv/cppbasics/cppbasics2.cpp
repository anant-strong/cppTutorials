#include <bits/stdc++.h>

using namespace std;           //a = a+1 is also written as a++

int main()
{
    int a = 5;
    a = a + 1;
    cout << a << endl;
    cout << a++ << endl; // it will first print a's value than increase it, so this should print 6
    cout << a << endl;
    cout << ++a << endl; // it will first increase a value than print it, and this should print 8
    //relational operators
    // == for comparing value is equals or not
    // != not equals to
    // A >= B checks if A is greater than or equals to B
    // A <= B checks if A is less than or equals to B
    // 
    return 0;
}
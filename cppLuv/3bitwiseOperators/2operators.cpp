//increament/decreament operators
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i = 4;
    int a = i++; //tu use krle mujhe prr purani value and statement ke baad me apni value badha lunga
    cout << "Value of a = "<< a << "\nValue of i = " << i << endl;
    a = ++i;    //tu use krle mujhe nai value ke sath
    cout << "Value of a = " << a << "\nValue of i = " << i << endl;

    //same with decreament operators
    return 0;
}
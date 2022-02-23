#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,rem,d = 0;

    cout << "Enter a number to convert it to binary: ";
    cin >> n;
    int k = n;

    while(n){
        rem = n % 2;
        d = d * 10 + rem;
        n = n/2;
    }
    cout << "The binary form of " << k << " is " << d << endl;

    // other approach explanation in the copy
    // int n;
    // cin >> n;
    // int bit = 0;
    // while(n){
    //     bit = (bit * 10) + (n & 1);
    //     n = n >> 1;
    // }
    // cout << bit;
    
    return 0;
}
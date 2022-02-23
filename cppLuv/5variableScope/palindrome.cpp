#include <bits/stdc++.h>

using namespace std;

//12321 reverse is also the same number i.e. 12321
//121 reverse is also the same number i.e. 121
int main()
{
    int rev = 0, rem, n, m;

    cout << "Enter a no: ";
    cin >> n;
    m = n;

    while(n){
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n/10;
    }

    if(m == rev){
        cout << "Palindrome";
    }
    else{
        cout << "Not a Palindrome";
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
//153 = 1^3 + 5^3 + 3^3
int main()
{
    int n, d, sum = 0;
    cout << "Enter the number: ";
    cin >> n;

    int k = n;

    while(n){
        d = n % 10;
        sum = sum + d * d * d;
        n = n/10;
    }
    if(sum == k){
        cout << "It is an Armstrong Number";
    }
    else{
        cout << "It is not an Armstrong Number";
    }
    return 0;
}
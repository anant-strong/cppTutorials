#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, rem, d = 0;

    cout << "Enter the binary to convert it to decimal: ";
    cin >> n;
    int k = n;
    int t = n;
    int count = 0;
    while(k){
        count++;
        k = k/10;
    }
    while(n){
        rem = n % 10;
        d = d + rem*pow(2,count - 1);
        count--;
        n = n/10;
    }
    cout << "The decimal form of " << t << " is " << d << endl;
    return 0;
}
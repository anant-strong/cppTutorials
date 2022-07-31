//naive approach
//gcd(a,b) = gcd(a-b,b) = gcd(a%b,b)  given that a>b

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;

    cin >> a >> b;

    int k = min(a,b);
    int gcd;
    for(int i = 1; i<=k;i++){
        if((a%i==0)&& (b%i==0)){
        // ((a-b)%i==0)&& (b%i==0)
        // ((a%b)%i==0)&& (b%i==0)
        // can also be used
            gcd = i;
        }
    }

    cout << "GCD of " << a << " and "<< b << " is: "<< gcd;
    return 0;
}
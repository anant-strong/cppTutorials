#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, rem, d = 0;

    cout << "Enter the binary to convert it to decimal: ";
    cin >> n;
    
    int t = n;
    int i = 0;
    while(n){
        rem = n % 10;
        d = d + rem*pow(2,i);
        
        i++;
        n = n/10;
    }
    cout << "The decimal form of " << t << " is " << d << endl;
    return 0;
}
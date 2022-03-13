//nCr program
#include <bits/stdc++.h>

using namespace std;

int fact(int n){
    
    int fact = 1;
    for(int i = 1; i<=n;i++){
            fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r){
        int ans;
        
        ans = fact(n)/(fact(n-r)*fact(r));

        return ans;
}

int main()
{
    int n ,r;
    cout << "Enter n and r for calculating ncr ";
    cin >> n >> r;

    int answer = nCr(n,r);

    cout << answer;
    return 0;
}
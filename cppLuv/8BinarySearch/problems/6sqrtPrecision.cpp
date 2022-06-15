#include <bits/stdc++.h>
using namespace std;

long long int binarySearch(int x)
{
    int s = 0;
    int e = x;
    long long int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        long long int sq = mid * mid;
        if (sq == x)
        {
            return mid;
        }
        if (sq < x)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double sqrtPreci(int a, int p,int n){
    double factor = 1;
    double ans = a;

    for(int i = 0; i < p; i++){
        factor = factor/10;

        for(double j = ans; j*j < n;j = j + factor ){
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int tempAns = binarySearch(n);
    cout << "Square root with precision is: " << sqrtPreci(tempAns,3,n);

    return 0;
}
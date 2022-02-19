#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int c = 1; //counting variable to count no of time we print
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= i){
            cout << c;
            c++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
//this pattern will be printed
// 5
// 1
// 23
// 456
// 78910
// 1112131415
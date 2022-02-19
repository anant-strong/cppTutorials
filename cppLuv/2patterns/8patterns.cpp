#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j<=i){
            cout << i;
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
// 22
// 333
// 4444
// 55555
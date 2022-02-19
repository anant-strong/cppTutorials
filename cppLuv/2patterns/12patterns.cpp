#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char c = 'A';
    cin >> n;
    int i = 1;
    while(i<=n){
        int j =1;
        while(j<=n){
            cout << char(c + i - 1);
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
//this pattern will be printed
// 5
// AAAAA
// BBBBB
// CCCCC
// DDDDD
// EEEEE
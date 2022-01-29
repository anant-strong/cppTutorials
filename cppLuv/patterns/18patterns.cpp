#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char c = 'A';
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= i){
            cout << char(c + i + j - 2);
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
//this will print 
// 4
// A
// BC
// CDE
// DEFG
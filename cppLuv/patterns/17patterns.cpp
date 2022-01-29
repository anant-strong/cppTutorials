#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char c = 'A';
    int t = 1; // we take a counting variabe to count how many times we are printing
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= i){
            cout << char(c + t - 1);
            t++;
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
// DEF
// GHIJ
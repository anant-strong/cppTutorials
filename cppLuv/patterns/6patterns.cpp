#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int c = 1; //variable to count print
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << c << " ";
            c++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
//this pattern will print
// 3
// 1 2 3 
// 4 5 6 
// 7 8 9
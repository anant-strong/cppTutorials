#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int t = 1; //counting variable
    cin >> n;
    int row = 1;
    while(row <= n){
        //for spaces
        int space = 1;
        while(space<=row-1){
            cout << " ";
            space++;
        }
        //to print numbers
        int col = 1;
        int t = row;
        while(col<=n-row+1){
            cout << t;
            t++;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
//this will print this
// 4
// 1234
//  234
//   34
//    4
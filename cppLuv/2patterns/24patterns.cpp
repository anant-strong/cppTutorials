#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while(row <= n){
        //to print spaces
        int space = 1;
        while(space<=n-row){
            cout << " ";
            space++;
        }
        //to print numbers
        int col = 1;
        while(col<=row){
            cout << row;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
//this will print
// 4
//    1
//   22
//  333
// 4444
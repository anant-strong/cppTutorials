#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while(row <= n){
        int space = n - row;
        //to print spaces
        while(space){
            cout << " ";
            space--;
        }
        // to print stars
        int col = 1;
        while(col <= row){
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
//this will print
// 4
//     *
//    **
//   ***
//  ****
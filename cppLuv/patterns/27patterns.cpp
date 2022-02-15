#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while(row<=n){
        //for spaces
        int space = 1;
        while(space<=n-row){
            cout << " ";
            space++;
        }
        //for numbers in middle
        int col = 1;
        int t1 = 1;//counting variable
        while(col<=row){
            cout<< t1;
            t1++;
            col++;
        }
        col = 1;
        int t2 = row-1; //another counting variable
        while(col<row){
            cout << t2;
            t2--;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
//this will print this
// 4
//    1
//   121
//  12321
// 1234321
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int t = 1; //counting variable
    cin >> n;
    int row = 1;
    while(row<=n){
        //for spaces
        int space = 1;
        while(space<=n-row){
            cout << " ";
            space++;
        }
        //for number
        int col = 1;
        while(col<=row){
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
//    1
//   23
//  456
// 78910
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][4];


//row wise input
    // for(int row = 0; row <3;row++){
    //     for(int col = 0; col<4;col++){
    //         cin>> arr[row][col];
    //     }
    // }
//col wise input
    for(int col = 0; col <4;col++){
        for(int row = 0; row<3;row++){
            cin>> arr[row][col];
        }
    }
    //printing
    for(int row = 0; row <3;row++){
        for(int col = 0; col<4;col++){
            cout << arr[row][col] << " ";
        }cout << endl;
    }
    return 0;
}
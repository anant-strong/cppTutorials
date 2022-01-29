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
        while(space <= row - 1){
            cout << " ";
            space++;
        }
        //to print stars
        int col = 1;
        while(col <= n -row + 1){
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
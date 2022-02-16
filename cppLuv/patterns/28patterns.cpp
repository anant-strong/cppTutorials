#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;

    while(row<=n){
        //first triangle
        int col = 1;
        while (col<=n-row+1)
        {
            cout << col;
            col++;
        }
        int t1 = 1;//to make this loop work star loop first
        while (row>=2 && t1<=row)
        {
            cout << "*";
            t1++;
        }
        int t2 = 1; //star loop second
        while (row>=3 && t2<=row-2)
        {
            cout << "*";
            t2++;
        }
        col = 1;
        int t3 = n-row+1;
        while(col<=n-row+1){
            cout << t3;
            t3--;
            col++;
        }
        
        
        cout << endl;
        row++;
    }
    return 0;
}
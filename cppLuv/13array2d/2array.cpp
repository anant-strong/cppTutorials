// wave print problem
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3] ;
    for(int i = 0 ; i<3;i++){
        for(int j  = 0; j< 3;j++){
            cin >> arr[i][j];
        }
    }
    cout << "printing wave:\n";
    for (int col = 0; col < 3; col++)
    {
        if (col % 2)
        {
            for (int row = 2; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
            }
            cout << endl;  
        }
        else
        {
            for (int row = 0; row < 3; row++)
            {
                cout << arr[row][col] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
//spiral matrix(leetcode)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cout << "enter row column:";
    cin >> row >> col;

    int  matrix[row][col];

    //input array
    for(int i = 0; i < row; i++){
        for(int j = 0; j<col;j++){
            cin >> matrix[i][j];
        }
    }

    int startRow = 0;
    int endRow = row-1;
    int startCol = 0;
    int endCol = col-1;

    int count = 0;  
    int total = (row)*(col);

    while(count < total){
        //print starting row
            for(int index = startCol; count < total && index<=endCol; index++) {
                cout << matrix[startRow][index]<< " ";
                count++;
            }
            startRow++;
            
            //print ending column
            for(int index = startRow; count < total && index<=endRow; index++) {
                cout << matrix[index][endCol] << " ";
                count++;
            }
            endCol--;
            
            //print ending row
            for(int index = endCol; count < total && index>=startCol; index--) {
                cout << matrix[endRow][index] << " ";
                count++;
            }
            endRow--;
            
            //print starting column
            for(int index = endRow; count < total && index>=startRow; index--) {
                cout << matrix[index][startCol] << " ";
                count++;
            }
            startCol++;
    }

    return 0;
}
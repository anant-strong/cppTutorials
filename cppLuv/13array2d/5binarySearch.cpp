#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cin >> row >> col;

    int arr[row][col];

    for(int i = 0; i < row ;i++){
        for(int j = 0;  j < col ; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Enter the target:";
    int target;
    cin >> target;

    int s = 0;
    int e = row*col - 1;
    int mid = s + (e-s)/2;

    while(s<=e){
        int element = arr[mid/col][mid%col];

        if(element == target){
            cout << "\nFound it...";
            exit(0);
        }

        if(element < target){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    cout << "\nNot found";
    return 0;
}
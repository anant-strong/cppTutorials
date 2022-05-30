#include <bits/stdc++.h>
using namespace std;

void sortOne(int arr[],int n){
        int left = 0, right = n-1;

        while(left<right){
            while(arr[left]==0 && left<right){
                left++;
            }
            while(arr[right]==1 && left<right){
                right--;
            }

            swap(arr[left],arr[right]);

            left++;
            right--;
            
        }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }cout << endl;
}

int main()
{
    int arr[8]={1,0,0,0,1,0,1,1};
    int brr[9]={1,1,1,1,0,0,0,1,1};

    sortOne(arr,8);
    printArray(arr,8);
    sortOne(brr,9);
    printArray(brr,9);
    return 0;
}
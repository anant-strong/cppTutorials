#include <bits/stdc++.h>
using namespace std;


void swapalt(int arr[],int n){

    for(int i = 0; i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
        
    }
}

void printArray(int arr[],int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6]={1,2,3,4,5,6};
    int brr[5]={10,9,8,7,6};

    swapalt(arr,6);
    swapalt(brr,5);

    printArray(arr,6);
    printArray(brr,5);

    return 0;
}
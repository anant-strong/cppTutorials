#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[],int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverse(int arr[],int size){
    int s=0;
    int e=size-1;

    while(s<=e){
        int temp = arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
}

int main()
{
    int arr[6]={1,2,3,4,5,6};
    int brr[5]={10,9,8,7,6};

    reverse(arr,6);
    reverse(brr,5);

    printArray(arr,6);
    printArray(brr,5);
    
    return 0;
}
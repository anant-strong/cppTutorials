#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    //for round 1 to n-1 i.e. 5
    for(int i = 1; i < n; i++){
        bool swapped = false;
        for(int j = 0; j < n - i; j++){
            //process till n - i cause every time one max element reaches it's position
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break; //for already sorted array
        }
    }
}
int main()
{
    int arr[6]= {1,10,7,6,14,9};
    bubbleSort(arr,6);
    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
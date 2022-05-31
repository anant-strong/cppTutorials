#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[],int n,int k){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]==k){
            ans = mid;
            e = mid - 1;  //for first occurance
        }
        else if(arr[mid]>k){
            e = mid - 1;
        }
        else{//arr[mid]<k
            s = mid +1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[],int n,int k){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]==k){
            ans = mid;
            s = mid + 1;  //for last occurance
        }
        else if(arr[mid]>k){
            e = mid - 1;
        }
        else{//arr[mid]<k
            s = mid +1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int arr[12]={1,2,4,4,4,4,4,4,4,4,4,6};

    int res = firstOcc(arr,12,4);

    cout << "FirstOccurance of 4 in arr is at index: " << res << endl;

    res = lastOcc(arr,12,4);
    cout << "LastOccurance of 4 in arr is at index: " << res << endl;
    return 0;
}
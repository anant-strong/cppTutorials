#include <bits/stdc++.h>
using namespace std;

int peakIndex(int arr[],int n){
    int s = 0;
    int e = n-1;

    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s = mid + 1;
        }
      
       else
       {
           e = mid;
       }
       mid = s + (e - s)/2;
        
      }
       return s;
}

int main()
{
    int arr[6]={1,2,3,5,4,3};

    int ans = peakIndex(arr,6); 
    cout << "Index:" << ans;
    return 0;
}
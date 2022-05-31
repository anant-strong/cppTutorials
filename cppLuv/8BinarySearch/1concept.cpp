#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int size,int key){

    int start = 0;
    int end = size-1;

    int mid = (start+end)/2;   //prefer to use start + (end-start)/2 because of 2^31-1 case 
    // as this is concept code so for understanding you can  use (start+end)/2

    while(start<=end){

        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid -1;
        }
        mid = (start+end)/2;

    }
    return -1;
}


int main()
{
    int even[6]={1,2,5,77,89,100};
    int odd[5]={3,4,8,788,990};

    int ODDans = binarySearch(odd,5,990);
    cout << "Odd search index" << ODDans << endl;

    int EVENans = binarySearch(even,6,5);
    cout << "Even search index" << EVENans << endl;

    return 0;
}
//  Find Unique element [https://bit.ly/3y01Zdu ]
//other elements are present two time
#include <bits/stdc++.h>
using namespace std;

void findUnique(int arr[],int n){
    int ans=0;

    for(int i= 0; i < n;i++){
        ans=ans^arr[i];//xor with same number is 0 so 2^2=0 and xor with zero is no itself
        //so 2^2^3=3
    }
    cout << ans;

}
int main()
{
    int arr[5]={1,2,1,2,3};

    findUnique(arr,5);
    return 0;
}
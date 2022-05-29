#include <bits/stdc++.h>

using namespace std;

int main()
{
    int array[100000];
    // int arr[90]= {0}; //whole array is initialized with zero for zero this can be used but 
    // for any other value below method is used

    fill_n(array,100000,2);  //we initialized whole array with two

    cout << array[0] << " " << array[97];
    return 0;
}
//int array[100]= {1};
//what will this statement do is it will set the first element to 1 and
//all others to zero


// int a[5] = {2,3};// first two values will be 2,3 other will be zero

//     int n = 5;

//     for(int i = 0; i < n; i++){
//         cout << a[i] << " ";
//     }
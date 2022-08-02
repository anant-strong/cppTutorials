#include <bits/stdc++.h>
using namespace std;

void print(int *p){
    cout << *p << endl;
}

void update(int *p){
    p = p + 1;
    cout << "Inside" << p << endl;
    // *p = *p + 1;
}

int getSum(int *p, int n){
    int sum = 0;

    for(int i = 0; i<n;i++){
        sum += *(p+i);
    }

    return sum;
}

int main()
{
    int value = 5;
    int *p = &value;

    print(p);
    cout << "Before " << p << endl;
    // cout << "Before" << *p << endl;  comment out p to run this part for clarity
    update(p);
    cout << "After " << p << endl;
    // cout << "After " << *p << endl;

    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;
    cout << "Sum is "<< getSum(ptr,5) << endl;
    //benefit of passing array as a pointer is you can pass specific part of array in function
    // cout << "Sum is "<< getSum(ptr+2,3) << endl;
    return 0;
}
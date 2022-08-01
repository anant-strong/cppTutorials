#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10] = {2,5,41,67};

    cout << "Address of first memory block is: "  << arr << endl; 
    cout << "Address of first memory block is: " << &arr[0] << endl;

    cout <<"Value at 0th index: " << *arr << endl; //(deferrencing arr i.e add. of first block)
    cout <<"Value at 0th index + 1: " << *arr + 1 << endl;

    cout << "Value at first index: " << *(arr + 1) << endl;
    cout << "Value at second index: " << *(arr + 2) << endl;

    int i = 3;
    cout << "Value at third index: " << i[arr] << endl;
    cout << "Value at third index: " << *(i + arr) << endl;

    //-------------------------------------------------------------------------

    int tmp[10];

    cout << sizeof(tmp) << endl;
    
    int *ptr = &tmp[0];
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl; //ptr ko store krne ke lie kitni memory chahie

    int *q = 0;
    q = tmp;  //or  q = &tmp[0];
    cout << sizeof(q) << endl;

    int a[10]= {1,2,3,4,5};
    int *p = &a[0];

    cout << "address of first element of array" << &a[0] << endl;
    cout << "address of the pointer p " << &p << endl;

    cout << "Before p " << p << endl;
    //ERROR
    // a = a + 1; // we can not change the mapped memory a is mapped to memory of first element
    p = p + 1; // this is valid because we are not changing the mapped memory of p, we are just 
                // changing the memory address stored inside of p (i.e. 710 + 1 = 714 for int)
    cout << "After p " << p << endl;
    return 0;
}
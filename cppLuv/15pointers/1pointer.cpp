#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 5;
    cout << num << endl;

    int *ptr = &num;

    // address of Operator -> &

    cout << "Address of num is: " << &num << endl;
    
    //dereferrence opereator -> *
    cout << "Ouput the value at address stored in pointer using pointer " << *ptr << endl;
    cout << "Address is: " << ptr << endl;

    double d = 4.3;
    double *p2 = &d;

    char c = 'a';
    char *p3 = &c;

    cout << "Size of int pointer : " << sizeof(ptr) << endl;
    cout << "Size of double pointer : " << sizeof(p2) << endl;
    cout << "Size of char pointer : " << sizeof(p3) << endl;
    return 0;
}
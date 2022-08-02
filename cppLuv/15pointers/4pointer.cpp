#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10] = {1,2,3,5};

    char ch[7] = "abcdef";

    cout << arr << endl; //incase of int it was printing address of first element
    //attention here
    cout << ch << endl;  // here it is printing elements till it find the null character

    char *c = &ch[0];
    cout << c << endl; // memory se jab tak null character nai milta tab tak print krta rahta hai cout

    char tmp = 'z';
    char *p = &tmp;

    cout << p << endl; //this should print the address but it printed some random char string till 
                       //it found null in the memory
    cout << *p << endl; // using this is fine
    return 0;
}
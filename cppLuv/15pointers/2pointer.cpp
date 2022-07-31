#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int *p; this is bad practice as this pointer is pointing to some garbage address we don't know
    //instead do this 
    // int *p = 0; // or int *p = NULL;
    // cout << *p << endl; // as this will give segmentation fault and you'll know that pointer is pointing 
    // // to NULL memory which don't exists


    /*(1)
    int i = 5;
    
    int *q = &i;  //this 

    cout << q << endl;
    cout << *q << endl;

    int *p = 0;  // and this are same  
    p = &i;

    cout << p << endl;
    cout << *p << endl;
    */

   /* (2)
   int num = 5;
   int *ptr = &num;
   int a = *ptr;

   a++;
   cout << num;
    */ 

   int num = 5;
   int *ptr = &num;
   cout << "before " << num << endl;
   (*ptr)++;
   
   cout << "after " << num << endl;

    //copying a pointer+
    int *q = ptr;  //ptr means &num
    cout << q << " - " << ptr << endl;
    cout << *q << " - " << *ptr << endl;

    *q = *q + 1;
    cout << *q << endl;

    cout << "before q " << q << endl;
    q = q + 1;
    cout << "after q " << q << endl;
    return 0;
}
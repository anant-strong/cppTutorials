#include <iostream>

using namespace std;

int main()
{
    int index = 6;
    do {                                  //while loop-> checks condition first then execute code inside
        cout << index << endl;            //do while loop-> do first check later
        index++;                       // this code in while loop will not return 6 as it will say 6 >5 not allowed
    }while(index <= 5);                 //at first, but in do while it will return 6 then check ohh index is 
    return 0;                           // now greater then 5 i will not get executed other time
}
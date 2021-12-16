#include <iostream>

using namespace std;

int main()
{
    int index = 1;
    while(index <= 5 || index == 9){           //while loop is gonna get execute until the condition insid
                                             //the brackets is true, be aware of infinite loops, like 
        cout << index << endl;              //if we edit index++ from this code it will be infinite loop
        index++;                        //as index is 1 and the condition will be true forever so whileloop
    }                                    //will get executed again and again
    return 0;
}
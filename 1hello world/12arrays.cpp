#include <iostream>

using namespace std;

int main()
{
    int luckynums[] = {234, 45, 85, 69};   //this is an undefined array if 
                                            //i type 20 b/w the boxes it will contain 20elements
    luckynums[2] = 58;             //here i assigned 58 value to element on index 2 in array
    luckynums[4] = 100;            //here i added a new element in the array at index 4
    cout << luckynums[2] << endl;
    cout << luckynums[4];


    return 0;
}
// 2d arrays is an array in which each element inside array is itself an array
// nested for loops -> for loop inside a for loop
#include <iostream>

using namespace std;

int main()
{
    int numberGrid[3][2] = {                   //you should specify the no of elements in array
                        {1,2},                 // and sub array
                        {3,4},
                        {5,6}
             
    };
    cout << numberGrid[0][1] << endl;      
    cout << numberGrid[2][1] << endl;
    for (int i = 0; i < 3; i++)
    {                                         //if didn't understand nested for loop go watch the video
       for (int j = 0; j < 2; j++)
       {
          cout << numberGrid[i][j];
       }
       cout << endl;
    }
    
    return 0;
}
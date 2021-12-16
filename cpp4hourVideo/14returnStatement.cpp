#include <iostream>

using namespace std;

double cube(double num)             //this functn will return value
{
    
    double result = num * num * num;   // also can be  
    return result;                     //return num * num * num;
}
                                                       //if you don't want input from user
int main()                                             //int main()
{                                                      //{ cube(5);
                                                       // cout << cube(5); }
    double num;
    cout << "Enter a no you want to cube: ";
    cin >> num;
    cube(num);
    cout << cube(num);
    
    return 0;
}
// return is a special kind of keyword in cpp as it tells that we are done executing code from here 
// in a function so anything below return statement will not get executed in a function
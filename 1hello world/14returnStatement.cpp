#include <iostream>

using namespace std;

double cube(double num)             //this functn will return value
{
    
    double result = num * num * num;  
    return result;
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
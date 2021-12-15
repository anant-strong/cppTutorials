#include <iostream>
#include <cmath>      //we are importing some code so we can do maths easily

using namespace std;

int main()
{
    cout << pow(2, 4) << endl;    //2 raise to the power 4
    cout << sqrt(49) << endl;     //square root of 49
    cout << sqrt(0.25)<< endl;
    cout << round(4.7) << endl;  //this will round off the number
    cout << round(5.3) << endl;
    cout << round(4.5) << endl;
    cout << ceil(4.1) << endl;  //this will round to next number no matter what in the decimal
    cout << floor(7.7) << endl; // this will round back no matter what in the decimal 
    cout << fmax(5, 99) << endl; // this will give back the bigger no.
    cout << fmin(5, 99) << endl; // this will give back the smaller no.

    return 0;
}
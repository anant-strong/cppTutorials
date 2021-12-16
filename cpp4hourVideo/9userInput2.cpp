#include <iostream>

using namespace std;

int main()
{
    // string name;                       when you will enter let's say anant chaudhary
    // cout << "Enter your name: ";       it will only print anant ignore chaudhary as it assign 
    // cin >> name ;                      name as anant
    // cout << "Hello " << name;

    string name;
    cout << "Enter your name: ";
    getline(cin, name);                  //now it will take whole line and assign it to name

    cout << "Hello " << name;


    return 0;
}
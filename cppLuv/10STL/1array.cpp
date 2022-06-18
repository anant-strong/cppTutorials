#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s[3] = {1,2,3};

    //same declaration of array is done in STL also like below
    array<int, 4> a = {1,2,3,4};
    
    cout << "Size of array = " <<a.size();
    cout << "\nElement at 2nd Index = "<< a.at(2);
    cout << "\nEmpty or not: " << a.empty();
    cout << "\nFirst element of array: "<<a.front();
    cout << "\nLast element of array: "<< a.back();
    return 0;
}
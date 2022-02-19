#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 100000;
    int b =100000;
    long int c = a * 1L * b; //we made calculation happen in long by 1L (multiply by 1long), which was happening in int
    cout << c << endl;           //and than stored it in long int c
    int mx = INT_MAX; 
    cout << mx << endl;//range of int will be displayed 
    cout << mx + 1 << endl; //value will be negative of max int value, 
    //as we added 1 in max value of int so this is cycle it goes to the least value of int //this is overflow
    return 0;
}
//1LL means long long int
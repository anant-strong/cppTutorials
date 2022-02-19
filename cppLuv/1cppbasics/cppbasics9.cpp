/*
Given rectange of length l and breadth b, Print area of rectangle.

Constraints:
1 <= l <= 10^9
1 <= b <= 10^9

Input format:
two spaced integer l and b
Output format:
one integer answer

Sample input:
3 4
Sample output:
12
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l,b;
    cin >> l >> b;           //if we enter 10^5 as l and 10^6 as b than it will overflow  
    // cout << l*b << endl;    //as operation is b/w int so they will never return 10^11
    cout << l * 1L * b;
    return 0;
}
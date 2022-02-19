#include <bits/stdc++.h>

using namespace std;
//->why can't we do previous calculation in double,if double range is big enough
int main()
{
    double a = 100000;
    double b = 100000;
    double c = a*b;
    
    cout << c << endl;  //this will print in scientific 
    cout << fixed << c << endl; //by adding fixed this will print normal
    //->because it is printing .00000 after result well that's not an issue see below
    cout << fixed << setprecision(0) << c << endl;
    c = 1e24;  //this means c = 10^24,it is written scientifically
    cout << c << endl; //it will print some approx value value to 10^24, so this is called precision error in double and float
    //that why we should not use double/float where int can be used.
    
    
    return 0;
}
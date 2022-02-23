#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 1 , b = 2;
    if(a-- > 0 || ++b >2){
        cout << "takla" << endl;
    }
    else{
        cout << "poti" << endl;
    }
    cout << a << " " << b;
    return 0;
}
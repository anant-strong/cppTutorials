#include <bits/stdc++.h>

using namespace std;

int setbits(int a){

    int i = 0;
    while(a){
        a = a & (a-1);
        i++;
    }
    return i;
}
int main()
{
    int a,b;
    cin >> a >> b;

    int ans = setbits(a);

    int ans2 = setbits(b);

    int fans = ans + ans2;

    cout << fans;
    return 0;
}
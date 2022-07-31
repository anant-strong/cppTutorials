#include <bits/stdc++.h>
using namespace std;

int pw(int a,int b){
    if(b==0){
        return 1;
    }
    if(b%2==0){
        int t = pw(a,b/2);
        return (1ll*t*t);
    }
    else{
        int t = pw(a,(b-1)/2);
        
        return (1ll*a*t*t);
    }
}


int main()
{
    int a,b,m;
    cin >> a >> b >> m;

    cout << "Power " << pw(a,b);
    return 0;
}
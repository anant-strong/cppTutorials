#include <bits/stdc++.h>

using namespace std;


int power(int a,int b){

    int ans = 1;

    for(int i = 1; i <= b;i++){
        
        ans = ans*a;

    }
    return ans;
}
int main()
{
    //writing above problem using function 
    //but this time writing function in different way

    int a,b;

    cin >> a >> b;

    int y = power(a,b);

    cout << y;
    return 0;
}
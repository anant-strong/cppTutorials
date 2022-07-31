// gcd pro approach
#include <bits/stdc++.h>
using namespace std;

//gcd(a,b) == gcd(b%a,a)
//tc --> O(log(max(a,b))) 

// int gcd(int a,int b){
//     if(a==0){
//         return b;
//     }
//     return gcd(b%a,a);
// }

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }

    while(a!=b){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}

int main()
{
    int a,b;
    cin >> a >> b;

    int ans = gcd(a,b);
    cout << "GCD of a and b is : " << ans << endl;
    cout << "LCM of a and b is : " << (a*b)/ans << endl;
    return 0;
}
//lcm(a,b)*gcd(a,b) =  a*b (important relation between lcm and gcd)
//prebuilt function in cpp is __gcd(a,b) it is same as the 1st one gcd

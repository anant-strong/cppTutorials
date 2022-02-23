#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string a;
    cin >> n;

    //prime number or not
    for( int i = 2; i < n ; i++){
        if(n%i == 0){
            a = "this is not a prime number" ;
            break;
        }
        else{
            a =  "this is a prime number";
        }
    }
    cout << a;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if(n==2){
        cout << "Prime Number";
    }else if(n<2){
        cout << "Not a Prime Number";
    }else{
        for(int i = 2;i<=n/2;i++){
            if(n%i){
                continue;
            }else{
                cout << "Not a Prime Number";
                exit(0);
            }
            
        }
        cout << "Prime Number";
        
    }
    return 0;
}
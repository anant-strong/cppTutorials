//even odd program
#include <bits/stdc++.h>

using namespace std;

bool isEven(int num){

        if(num&1){
            return 0;
        }
        else {
            return 1;
        }
}
int main()
{
    int n;
    cin >> n;

    if(isEven(n)){
        cout << "Number is Even";
    
    }
    else{
        cout << "Number is Odd";
    }
    return 0;
}
//program to check if a number is prime or not
#include <bits/stdc++.h>

using namespace std;

bool isPrime(int num){

    int i = 2;
    if(num == 2){
        return 1;
    }
    for(i;i<=sqrt(num);i++){
        if(num%i==0){
            
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    if(isPrime(n)){
        cout << "\nThe number is prime";
    }
    else{
        cout << "The number is not prime";
    }
    return 0;
}
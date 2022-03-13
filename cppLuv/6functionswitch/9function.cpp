#include <bits/stdc++.h>

using namespace std;

void fibonacci(int a){

        cout << 0 << " " << 1 << " ";
        int prev = 0;
        int next = 1;
        for(int i = 1 ; i <= a-2; i++){
            
            
            int dig = prev + next;
            
            cout << dig << " ";
            prev = next;
            next = dig;

        }
}
int main()
{
    int n;
    cout << "Enter the number of terms of fibonacci series you want to print: ";

    cin >> n;
    
    fibonacci(n);
    return 0;
}
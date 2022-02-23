#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    for (;;){
        if(i <= n){
            cout << i << endl;
        }else{
            break;   //break is used to stop the for loop cause it doesn't know when to stop
        }
        i++;
    }
    return 0;
}
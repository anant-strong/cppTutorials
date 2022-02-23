#include <bits/stdc++.h>

using namespace std;

int main()
{
    // fibonacci series 
    // 0,1,1,2,3,5,8,13........
    int n,nxt_num;
    int a = 0, b = 1;
    cin >> n;
    cout << a << " " << b << " ";
    for(int i = 1; i <=n; i++){
        nxt_num = a + b;
        cout << nxt_num << " ";
        a = b;
        b = nxt_num;
    }
    return 0;
}
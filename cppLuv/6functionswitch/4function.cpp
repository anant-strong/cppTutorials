#include <bits/stdc++.h>

using namespace std;

int power(){
    int a,b;
    cin >> a >> b;
    int ans = 1;

    for(int i = 1; i <= b;i++){
        
        ans = ans*a;

    }
    return ans;
}

int main()
{
    int y = power();

    cout << y << endl;

    y = power();
    cout << y;
    return 0;
}
//now see how code length is shorted and we are taking two times input land output the power
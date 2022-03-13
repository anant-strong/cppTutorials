#include <bits/stdc++.h>

using namespace std;


int power(int,int); //function prototype
int main()
{
    //solving previous problem through functions
    int a ,b;

    cin >> a >> b;

    int y = power(a,b);  //calling function

    cout << y;


    return 0;
}
int power(int x,int y) //function definition
{

    int ans = 1;
    for(int i = 1;i <= y;i++){
        ans = ans * x;
    }

    return ans;
}
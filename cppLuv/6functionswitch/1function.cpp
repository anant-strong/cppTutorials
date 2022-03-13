#include <bits/stdc++.h>

using namespace std;

int main()
{
    //pow(a,b); we are making the code for this

    int a,b,ans = 1;

    cin >> a >> b;

    for(int i = 1; i <=b; i++){

        ans = ans * a;

    }
    cout << "The answer is " << ans << endl;

    //if someone says that we again need two numbers and output their results
    //than we again need to write above program so to solve this we use functions
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    double b;
    char c;
    cin >> a >> b >> c;  //if i input c as 9 so in cout there will be 9 printed but not as and integer but as a char,
    cout << a << "\n" << b << "\n" << c << "\n" << (int) c << endl;   //so if i typecast c to int, i will get the ASCII value of char 9 i.e. 57
    cout << "HOYEE BALLE BALLE";
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    char d;
    cin >> a >> b >> c;  //cin takes input until it gets any space or \n means enter after every input by user extra enters and spaces are ignored 
      
    cout << a << " " << b << " " << c;
    cin >> d >> c; //while taking a character input cin will detect on one character and assign it to d and the next one character will be assigned to c
    cout << d << c;// let's input 97 press space 98 you will get output 97 why because it assigned 9 to d and 7 to c and output 9 char and 7 int
     
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
// this is not pattern 1 , pattern 1 is in pattern 2 and then continue 
// this is code to identify lowercase and uppercase 
int main()
{
char ch;
cin>>ch;

if (ch>='a'&& ch<='z'){
    cout<<"This Is Lowercase";

}
else if (ch>='A'&& ch<='Z'){
    cout<<"This is Uppercase";

}
else if (ch >= '0' && ch <= '9'){
    cout<<"This is numeric";
}
else {
    cout << "this is special character";
}
    return 0;
}
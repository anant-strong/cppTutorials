#include <bits/stdc++.h>
using namespace std;

char toLowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
int getLength(char name[]){
    int i = 0;
    while(name[i]!='\0'){
        i++;
    }
    return i;
}

bool palindrome(char name[],int n){
    int s = 0;
    int e = n -1 ;

    while(s<e){
        if(toLowercase(name[s])!=toLowercase(name[e])){
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}
int main()
{
    char name[20];
    cin >> name;
    
    cout << getLength(name) << endl;

    if(palindrome(name,getLength(name))){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not Palindrome" << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

string insertAtSpaces(string s,int n){
    string temp = "";

    for(int i = 0; i < s.length();i++){
        if(s[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(s[i]);
        }
    }
    return temp;
}
int main()
{
    string s;
    getline(cin,s);

    string ans = insertAtSpaces(s,s.length());

    for(int i = 0; i < ans.length();i++){
        cout <<ans[i];
    }cout << endl;

    return 0;
}
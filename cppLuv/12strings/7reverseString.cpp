#include<bits/stdc++.h>
using namespace std;

string reverse(string x){
    int i = 0;
    int j = x.length() - 1;
    while(i <= j){
        swap(x[i], x[j]);
        i++;
        j--;
    }
    x.push_back(' ');
    return x;
}

int main(){
    string s, x;
    vector<string> v;
    getline(cin, s);
    int i = 0;
    int j = s.length() - 1;
    while(s[i] != '\0'){
        if(s[i] != ' '){
            x.push_back(s[i]);
        }
        else if(s[i] == ' '){
            v.push_back(reverse(x));
            x.clear();
        }
        i++;
    }
    v.push_back(reverse(x));
    for(int i = 0; i < v.size(); i++){
        cout<<v[i];
    }
    return 0;
}
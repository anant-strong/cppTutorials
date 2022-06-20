#include <bits/stdc++.h>
using namespace std;

int getLength(char name[]){
    int i = 0;
    while(name[i]!='\0'){
        i++;
    }
    return i;
}

void reverse(char name[], int n){
    int s = 0;
    int e = n - 1;

    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
}
int main()
{
    char name[20];
    cin >> name;
    
    cout << getLength(name) << endl;
    reverse(name,getLength(name));
    cout << name;
    return 0;
}
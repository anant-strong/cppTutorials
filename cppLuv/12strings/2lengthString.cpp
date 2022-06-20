#include <bits/stdc++.h>
using namespace std;

int getLength(char name[]){
    int i = 0;
    while(name[i]!='\0'){
        i++;
    }
    return i;
}
int main()
{
    char name[20];
    cin >> name;
    
    cout << getLength(name) << endl;
    return 0;
}
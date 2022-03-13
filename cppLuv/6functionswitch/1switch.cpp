#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c = 'a';
    int num = 1;
    switch(c){
        case 1: 
            cout << "This is first case" << endl;
            break;
        case 'a':
            cout << "This is character case" << endl;
            switch (2*num)
            {
            case 2:
                cout << "value of num is 1" << endl;
                break;
            
            
            }
            break;
        case 3:
            cout << "This is third case" << endl;

        case 4:
            cout << "This is fourth case" << endl;
            break;
        default:
            cout << "This is default case" << endl;
    }
    return 0;
}
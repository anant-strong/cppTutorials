#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 1;    //this variable we can use/update in entire main function 
    cout << a << endl;

    if(true){                      //always true if statement
        // a = 5;       here we are updating the variable a
        int a = 2;         //here we created a new variable a whose scope is inside if statement after that it dies
        int b = 3;
        cout << a << endl;
        cout << b << endl;
    }
    cout << a << endl;
    // cout << b << endl;   we cann't output b as it's scope was in if statement after that it died

    int b = 4;           //this b is having scope as main
    cout << b << endl; 

    //int b = 5; we can not redeclare same variable in same scope all we can do is update that variable in same scope
    //b = 5; is fine
    
    if(1){
        int b;
        if(1){
            int b;
            if(1){
                int b;
            }
        }
    }
    //as every b we declared is having it's different scope so above if code will not give error
    return 0;
}
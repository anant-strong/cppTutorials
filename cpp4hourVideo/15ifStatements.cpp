#include <iostream>

using namespace std;

int main()
{
    bool isMale = false;                                    
    bool isTall = false;

    if(isMale && isTall)                         // && -> and operator both conditions should be true
    {                                            // in order for code to get executed 
        cout << "You are a tall male";           // || -> or operator one of the two conditions should
    } else if (isMale && !isTall){               //be true in order for code to get executed
        cout << "You are a short male";          //! -> negation operator means not 
    } else if (!isMale && isTall){
        cout << "You are tall but not male";
    } else {
        cout << "You are not male and not tall";
    }
    
    return 0;
}
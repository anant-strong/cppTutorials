#include <iostream>

using namespace std;

int getMax(int num1, int num2, int num3){               // we can also use > greater than operator
    int result;                                          // < less than , <= less than equals to 
    if(num1 >= num2 && num1 >= num3){                    //>= greater than equals to
        result = num1;                                   // == equals to, = this is used for assigning values
    } else if(num2 >= num1 && num2 >= num3){             // != not equals to
        result = num2;
    
    }else {
        result = num3;
    }
    return result;
}

int main()
{
    cout << getMax(2000, 500, 20);
    return 0;
}
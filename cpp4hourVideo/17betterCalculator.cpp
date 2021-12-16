#include <iostream>

using namespace std;

int main()
{
    double num1 , num2;
    double result;
    char op;
    
    cout << "Welcome to Calculator this calculator can perform  operations like +, -, *, /" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operation you waana perform: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2 ;

    if(op == '+'){
           result = num1 + num2;
    }else if(op == '-'){
        result = num1 - num2;
    }else if(op == '/'){
        result = num1 / num2;
    }else if(op == '*'){
        result = num1 * num2;
    }else {
        cout << "invalid operation please choose from +,-,*,/";
    }
    cout << "Here is your answer: " << result;
    return 0;
}
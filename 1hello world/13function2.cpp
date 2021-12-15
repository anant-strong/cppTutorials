#include <iostream>

using namespace std;
                                   
void sayHi(string name, int age);    //i created the function below so need to add this above
                                     //so that cpp know that there is some function sayHi which i need
                                    // to execute before main and then call it from main

int main()
{
    sayHi("takla", 23);
    return 0;
}
void sayHi(string name, int age)
{
    cout << "Your name is " << name << "\nYour age is " << age << endl;
}
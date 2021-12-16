#include <iostream>

using namespace std;

void sayHi(string name, int age)     //we created a void funtion it will return nothing like main returns 0
{                            
    cout << "Hello " << name << " \nyou age is " << age << endl;     //in order to execute this piece of code we need to call it from main
                                                                //function
}                                                         

int main()
{
    sayHi("Monkey", 62); //now function is called and the code above will get executed
    sayHi("Tiger", 12);      //so that's how you can execute a piece of code many time without writing
    sayHi("Elephant", 19);       //it just giving different info.
    
    return 0;
}
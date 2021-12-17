#include <iostream>

using namespace std;

int main()
{
    int age = 19;
    int *pAge = &age;      //this is a pointer variable
    double gpa = 2.7;  
    double *pgpa = &gpa;        
    string name = "anant";
    string *pname = &name;

    cout << &age << endl;       //this will print out the memory address of 19 i.e.
    cout << pAge << endl;     // this will print out the pointer(memory address) stored in the variable pAge
    cout << pgpa << endl;        //             ""
    cout << *pname << endl; // this will print out the value of variable whose pointer(memory address) 
                              //is stored in this pointer variable(or dereferrencing a pointer)
    cout << *&name << endl;   // -> also deferrencing without pointer variable
    return 0;                     //address where 19 is stored inside the physical memory
}                                 // memory address = pointer, the address which will get print out
                                  // is pointer
// pointer -> memory address of the variables value stored inside physical memory
// we can also create pointer variable which will store the pointer(memory address) for a variable
// if the variable is int/string/double/etc then it's pointer variable will also be int/string/double/etc 
// and itsvariable always starts with *....  best practice write by *p....
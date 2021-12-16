#include <iostream>
using namespace std;

int main()
{

    string shortForm = "tvstvstvstvs";
    string shortFormSubString;
    shortFormSubString = shortForm.substr(5, 2);

    cout << "taklaverysmart"; //no newline character
    cout << "verysmart\n";    // newline character = \n inside string or endl
    cout << "hey how you doing" << endl;
    cout << shortForm << endl;
    cout << shortForm.length() << endl;    //string function we are calling the length functn it will print 
                                        //the no. of character inside the string shortForm
    cout << shortForm[0] << endl;          //print the text on index no. 0 which is t, v index 1,s index2 so on
    cout << shortForm.find("s", 0) << endl; //find function will find s in shorForm and return the index no on which
                           //it is present
    cout << shortForm.substr(4, 3) << endl;  //substr function will grab 3character inside the string starting                       
                                   //from character on index 4
    cout << shortFormSubString;
    return 0;
}
#include <iostream>

using namespace std;

string getDayOfWeek(int dayNum){
    
    string dayName;

    switch(dayNum){                                              // used when there is more data to 
                                                                 // compare and many ifelse are forming
        case 0: 
        dayName = "Sunday";                                     //if(dayNum == 0){
        break;                                                  //         dayName = "Sunday";
        case 1:                                                 //} else if(dayNum == 1){
        dayName = "Monday";                                     //     dayName = "Monday";
        break;                                                  // } so many if else statements are
        case 2:                                                   // forming 
        dayName = "Tuesday";
        break;
        case 3:
        dayName = "Wednesday";
        break;
        case 4:
        dayName = "Thursday";
        break;
        case 5:
        dayName = "Friday";
        break;
        case 6:
        dayName = "Saturday";
        break;
        default: 
        dayName = "Please enter valid day no. from (0 to 6)";
    
    }
    return dayName;
}

int main()
{
    int dayNum;
    
    cout << "Enter day no. to get the day name: ";
    cin >> dayNum;
    cout << "Your day name is " << getDayOfWeek(dayNum);
    return 0;
}
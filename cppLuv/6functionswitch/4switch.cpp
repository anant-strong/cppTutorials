#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;
    int hund,fifty,twenty,one;

    switch(1){

        case 1:
            hund = n/100;
            n = n%100;
            cout << "No of hundred rupees notes = " << hund << endl;
        
        case 2:
            fifty = n/50;
            n = n % 50;
            cout << "No of fifty rupees notes = " << fifty << endl;
        
        case 3:
            twenty = n/20;
            n = n % 20;
            cout << "No of twenty rupees notes = " << twenty << endl;
        
        case 4:
            one = n/1;
            
            cout << "No of one rupees notes = " << one << endl;

    }
    return 0;
}
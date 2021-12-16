#include <iostream>

using namespace std;

int main()
{
    string color, pluralNoun, celebrity;
    
    cout << "Enter color name: ";
    getline(cin, color);
    cout << "Enter plural noun: ";
    getline(cin, pluralNoun);
    cout << "Enter celebrity name: ";
    getline(cin, celebrity);
    
    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;
    
    return 0;
}
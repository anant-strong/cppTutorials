#include <iostream>

using namespace std;

int power(int baseNum, int powNum){
    int result = 1;

    for(int i = 0; i < powNum; i++){
        result = baseNum * result;

    }
    
    return result;
}

int main()
{
    int baseNum, powNum;

    cout << "Enter the base: ";
    cin >> baseNum;
    cout << "Enter the power: ";
    cin >> powNum;
    cout << "Your answer is: " << power(baseNum, powNum);
    return 0;
}
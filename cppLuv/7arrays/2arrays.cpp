#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[],int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int first[10] = {1,2};
    int n = 10;

    printArray(first,10);

    int second[15] = {1};
    n = 15;

    printArray(second,15);

    int third[9];
    n = 9;
    fill_n(third,9,5);
    printArray(third,9);


    return 0;
}
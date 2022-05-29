#include <bits/stdc++.h>

using namespace std;

void read(int a[100][100],int r,int c){

        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                cin >> a[i][j];
            }
        }
}
void display(int a[100][100],int r,int c){
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                cout << a[i][j];
            }
            cout << endl;
        }
}
int sum(int a[100][100],int r,int c){
    int sum1=0;
    for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                sum1 = sum1 + a[i][j];
            }
        }
    return sum1;
}
int mult(int a[100][100],int r,int c){
    int p = 1;
    for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                p = p * a[i][j];
            }
        }
    return p;
}
int main()
{
    int a[100][100],r,c;
    cout << "Enter the size of row of the matrix: ";
    cin >> r;
    cout << "Enter the size of column of the matrix: ";
    cin >> c;
    read(a,r,c);
    display(a,r,c);
    cout << endl;
    cout << "value of the sum of the matrix elements: " << sum(a,r,c);
    cout << endl;
    cout << "value of the multiplication of the matrix elements: " << mult(a,r,c);
    return 0;
}
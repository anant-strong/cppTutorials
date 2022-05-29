#include <bits/stdc++.h>

using namespace std;

void read(int a[100][100],int r,int c){

        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                cin >> a[i][j];
            }
        }
}
void sum(int a[100][100],int b[100][100],int sum1[100][100],int r,int c){
        for(int i = 0;i<r;i++){
            for(int j= 0;j<c;j++){
                sum1[i][j]=a[i][j]+b[i][j];
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
void mult(int a[100][100],int b[100][100],int mul[100][100],int r,int c){
      for(int i = 0;i<r;i++){
            for(int j= 0;j<c;j++){
                mul[i][j]=0;
                    for(int k = 0;k<c;k++){
                        mul[i][j]+= a[i][k]*b[k][j];
                    }
            }
        }
}
int main()
{
    int a[100][100], b[100][100];
    int r,c,m,n;
    int sum1[100][100];
    int mul[100][100];
    
    cin >> r >> c >> m >> n;
    if(r == m && c == n){
        read(a,r,c);
        read(b,m,n);
        sum(a,b,sum1,r,c);
        display(sum1,r,c);
        mult(a,b,mul,r,c);
        display(mul,r,c);
    }
    return 0;
}
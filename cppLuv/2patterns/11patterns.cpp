// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while (j<=i){
//             cout << i + 1 -j;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }   
//this pattern will be printed
// 5
// 1
// 21
// 321
// 4321
// 54321
// another method 
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = 1;
        int c = i;
        while(j <= i){
            cout << c;
            c--;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
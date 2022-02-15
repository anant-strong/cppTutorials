// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         while(j <= i){
//             cout << i + j - 1;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }       
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
            c++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
//this pattern will be printed
// 5
// 1
// 23
// 345
// 4567
// 56789
#include <bits/stdc++.h>

using namespace std;

// int main()
// {
//     int n;
//     char c = 'A';
//     cin >> n;
//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         while(j <= i){
//             cout << char(c + n -i +j -1);
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }
//-------------other----------method-----------
int main()
{
    int n;
    char c = 'A';
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = 1;
        char x = c + n - i;
        while(j <= i){
            cout << char(x);
            x++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
//this will print 
// 4
// D
// CD
// BCD
// ABCD
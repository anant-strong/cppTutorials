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
//         while(j <= n){
//             cout << char(c + i + j - 2);
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }
//----------------------other ---------------method------------------
int main()
{
    int n;
    char c = 'A';
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = 1;
        char x = c + i - 1;
        while(j <= n){
            cout << x;
            x++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
//given pattern
//3
//ABC
//BCD
//CDE
// just like
// 123
// 234
// 345
// we used i + j -1 there
// here also i + j -1 = 1 --> for i and j = 1
//->if were able to assign 1 as A and 2 as B then kaam ban gya(work is done)
//lets tweak with formula i + j -1 = 1 , we need to get A from this formula
// so adding A - 1 both the sides
// i + j - 1 + A - 1 = 1 + A - 1
// i + j + A -2 = A
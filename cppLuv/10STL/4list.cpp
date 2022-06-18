#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    list<int> n(5,100);
    list<int> m(n);
    l.push_back(1);
    l.push_back(2);//also pop feature can be used
    l.erase(n.begin());
    cout << "after erase " << endl;
    for(int i:n){
        cout << i << " ";
    }cout << endl;

    cout << "size of list:" << m.size() << endl;
    return 0;
}
//list is made using doubly linked list, having two pointers for front and back
//for erase complexity is O(n),cause we have to traverse through whole list to get to element
#include <bits/stdc++.h>
//not understood all the concepts
using namespace std;
int main()
{
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(8);
    s.insert(8);
    s.insert(7);
    s.insert(69);
    s.insert(56);
    s.insert(56);

    for(auto i:s){
        cout << i << " ";
    }cout << endl;

    s.erase(s.begin());
    for(auto i:s){
        cout << i << " ";
    }cout << endl;

    cout << "7 is present or not: " << s.count(7) << endl;


    return 0;
}
//set me uniques elements hote h
//implementation is through bst
//if you put 5 5's then it will store only one 5
//sorted order output
//if any element is inserted,it can't be modified only insert/delete
//set vs unordered set 
//set is slower than unordered set
//in unordered set output is random not sorted
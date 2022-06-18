#include <bits/stdc++.h>
using namespace std;
int main()
{   
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    for(int i : d){
        cout << i << " ";
    }cout << endl;
    
    d.pop_back();

    for(int i : d){
        cout << i << " ";
    }cout << endl;

    d.push_front(1);

    cout << "Element at index 1->"<<d.at(1)<<endl;
    cout << "front:" << d.front() << endl;
    cout << "back:" << d.back() << endl;
    cout <<"empty:" << d.empty()<<endl;

    cout << "before erase size:" << d.size() << endl;
    d.erase(d.begin(),d.begin()+1);
    cout << "after erase size:" << d.size() << endl;   
    
    return 0;
}
//deque -- doubly ended queue, we can insert and delete at both the ends
//it is dynamic,not contiguous memory
//random access is possible using at
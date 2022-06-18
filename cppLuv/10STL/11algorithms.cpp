#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(16);
    v.push_back(35);
    // binarysearch
    cout << "Finding 16:  " << binary_search(v.begin(), v.end(), 16) << endl;
    cout << "Finding 2:  " << binary_search(v.begin(), v.end(), 2) << endl;
    // lowerbound,upperbound
    cout << "Lower bound: " << lower_bound(v.begin(), v.end(), 16) - v.begin() << endl;
    cout << "Upper bound: " << upper_bound(v.begin(), v.end(), 16) - v.begin() << endl;

    int a = 3;
    int b = 5;
    // max,min
    cout << "MAX-> " << max(a, b) << endl;
    cout << "MIN-> " << min(a, b) << endl;
    // swaping
    swap(a, b);
    cout << "a value after swap:" << a << endl;
    cout << "b value after swap:" << b << endl;

    string s = "abcd";
    // reversing string
    reverse(s.begin(), s.end());
    cout << "string-> " << s << endl;
    // rotating

    rotate(v.begin(), v.begin() + 2, v.end());
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    // sorting

    sort(v.begin(), v.end());

    cout << "after sorting" << endl;
    for(auto i : v){
        cout << i << " " ;
    }cout << endl;

    return 0;
}
//sort--> based on intro sort(made with combination of quicksort,heapsort,insertionsort)
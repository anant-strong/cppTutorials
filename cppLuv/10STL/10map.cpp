#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string> m;
    m[1]="anant";
    m[13]="chaudhary";
    m[2]="strong";
    
    m.insert({5,"bheem"});
    cout << "Before erase " << endl;
    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }

    cout << "finding 13->" << m.count(13) << endl;

    m.erase(13);
    cout << "After erase " << endl;
    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}
//in maps we have key for example
//anant points to scorpio  (valid)
//hannu points to scorpio   (valid)
//anant points to scorpio and maruti (invalid)
//one key will point to only one
//it also ouputs in sorted form

#include <bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> v){
    //kid's reverse code is above in the array folder
    int s = 0;
    int e = v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> ans){
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }cout << endl;
}
int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(113);
    v.push_back(22);
    v.push_back(19);
    v.push_back(16);
    v.push_back(15);

    vector<int> ans = reverse(v);
    print(ans);

    return 0;
}
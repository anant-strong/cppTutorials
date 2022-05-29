#include <bits/stdc++.h>
using namespace std;

bool uniqueoccur(vector<int>& arr){
    sort(arr.begin(),arr.end());
    vector<int> v;
    for(int i = 0; i < arr.size();i++){
        int c = 1;
        for(int j = i+1; j < arr.size();j++){
            if(arr[i]==arr[j]){
                c++;
                i++;
            }
        }
        v.push_back(c);
    }
    for(int i = 0; i < v.size();i++){
        for(int j = i+1; j< v.size();j++){
            if(v[i]==v[j]){
                return false;

            }
        }
    
    }
    return true;
}
int main()
{
    vector<int> arr={1,2};

    if(uniqueoccur(arr)){
        cout << "true";
    }
    else{
        cout << "false";
    }

    return 0;
}
//brute force my 1st approach got tle
// vector<int> findDuplicates(vector<int>& nums) {
//         vector<int> v;
//         for(int i = 0; i < nums.size();i++){
//             for(int j = i+1; j<nums.size();j++){
//                 if(nums[i]==nums[j]){
//                     v.push_back(nums[i]);
//                 }
//             }
//         }
//         return v;
//     }
#include <bits/stdc++.h>
using namespace std;
//my 2nd approach
vector<int> findDuplicates(vector<int>& nums) {
    vector<int> v;
    sort(nums.begin(),nums.end());
    for(int i = 0; i < nums.size()-1;i++){
        if(nums[i]==nums[i+1]){
            v.push_back(nums[i]);
        }
    }
    return v;
}

int main()
{
    vector<int> nums={1,2,5,3,7,4,2,6,6};
    vector<int> ans=findDuplicates(nums);
    for(int i =0; i < ans.size();i++){
        cout << ans[i] << " ";
    }
    return 0;
}
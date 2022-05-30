#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i = 0;
        int j =0;

        for(;i<nums1.size() && j<nums2.size(); ){
            if(nums1[i]==nums2[j]){
                v.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                j++;
            }
            
        }
        return v;
    }

int main()
{
    vector<int> nums1 ={1,2,2,1};
    vector<int> nums2 ={2,2};

    vector<int> ans = intersection(nums1,nums2);

    for(int i = 0; i < ans.size();i++){
        cout << ans[i] << " ";
    }
    return 0;
}
//output 
//2 2
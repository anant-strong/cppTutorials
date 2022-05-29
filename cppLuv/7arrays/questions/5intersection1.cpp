#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    
    vector<int> ans;
       sort(nums1.begin(),nums1.end());
       sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        int n=nums1.size(),m=nums2.size();
        while(i<n && j<m){
            if(i>0 && nums1[i-1]==nums1[i]){
                i++;
                continue;
            }
            if(nums1[i]>nums2[j])
                j++;
            else if(nums1[i]<nums2[j])
                i++;
            else {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }
       
        return ans;
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
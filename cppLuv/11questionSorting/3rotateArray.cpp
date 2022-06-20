#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
        
        vector<int> temp(nums.size());
        
        for(int i = 0; i < nums.size(); i++){
            temp[(i+k)%nums.size()] = nums[i];
        }
        
        nums = temp;
        
        
    }


int main()
{
    //leetcode problem
    return 0;
}
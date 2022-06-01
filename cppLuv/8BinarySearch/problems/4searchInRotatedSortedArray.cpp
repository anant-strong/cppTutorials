#include <bits/stdc++.h>
using namespace std;

int getPivot(vector<int> &nums, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (nums[mid] >= nums[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return e;
}

int binarySearch(vector<int> &nums, int s, int e, int key)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (nums[mid] == key)
        {
            return mid;
        }
        else if (nums[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int search(vector<int> &nums, int target)
{
    int pivot = getPivot(nums, nums.size());
    if (target >= nums[pivot] && target <= nums[nums.size() - 1])
    {
        return binarySearch(nums, pivot, nums.size() - 1, target);
    }
    else
    {
        return binarySearch(nums, 0, pivot - 1, target);
    }
}

int main()
{
    vector<int> nums = {4,5,6,7,0,1,2};

    int key = 6;
    int ans = search(nums, key);

    cout << ans << endl;
    return 0;
}
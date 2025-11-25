## Remove Duplicates From Sorted Array

- Problem No 26 on Leetcode.

This method removes repeated numbers from a sorted array and keeps only the unique numbers at the beginning of the same array.
It then returns how many unique numbers are left.

```

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int n = nums.size();
        int ans =1;
        for (int i = 1; i < n; i++) {
            if(nums[i] != nums[i-1]){
                nums[ans]=nums[i];
                ans++;
            }
        }
        return ans;  
    }
};

```
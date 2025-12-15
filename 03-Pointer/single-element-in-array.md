
## Single Non-Duplicate in Sorted Array

- Leetcode problem no 540

- Given a sorted array where every element appears exactly twice except for one element which appears once, find that single element.

```
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        int st = 0, end = n -1;

        if (n == 1) return nums[0];

        while(st <= end ){

            int mid = st + (end - st)/2;

            if(mid == 0 && nums[0] != nums[1]) return nums[0];
            if(mid == n-1 && nums[n-1] != nums[n-2]) return nums[n-1];

            if(nums[mid-1] != nums[mid] && nums[mid] != nums[mid+1]) 
                return nums[mid];


            // If mid is even, its pair should be at mid+1 (in left half)
            // If mid is odd, its pair should be at mid-1 (in left half)


            bool isLeftHalfEven;
            
            if(mid % 2 == 0) {
                // mid is even
                isLeftHalfEven = (nums[mid] == nums[mid+1]);
            } else {
                // mid is odd
                isLeftHalfEven = (nums[mid] == nums[mid-1]);
            }
            
            if(isLeftHalfEven) {
                // Single element is in right half
                st = mid + 1;
            } else {
                // Single element is in left half
                end = mid - 1;
            }
        }  return -1;
    }
};
```
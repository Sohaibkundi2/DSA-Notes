## Binary-search implementation for the peak index in a mountain array.



- In a valid mountain array, the first and last elements cannot be the peak.
Since the array increases on the left side and decreases on the right side, we can use binary search.


```
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        
        int st = 1;
        int end = nums.size() - 2;

        while (st <= end) {

            int mid = st + (end - st) / 2;

            if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1]) {
                return mid;
            }

            if (nums[mid - 1] < nums[mid]) {
                st = mid + 1;  
            } else {
                end = mid - 1;  
            }
        }

        return st;
    }
};

```
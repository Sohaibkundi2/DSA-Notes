# Kadane's algorithm

Kadane's algorithm is a dynamic programming technique used to find the maximum sum of a contiguous subarray

```
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int currSum = 0;
        for(int val:nums){
            currSum+=val;
            maxSum = max(maxSum, currSum);
            if(currSum < 0){
                currSum=0;
            }
        }   return maxSum;
    }
};
```

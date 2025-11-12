# Container With Most Water



```
<!-- This is valid but it will give you TLE because its time complexity is high -->
class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int maxWater =0;
        int n = height.size();

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){

                int w = j - i;
                int h = min(height[i], height[j]);

                int currWater = w * h;

                maxWater = max(maxWater, currWater);
            }
        }
        return maxWater;
    }
};
```
```
class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int maxWater =0;
        int n = height.size();
        int lb = 0;
        int rb = n-1;

        while(lb <rb){
            int ht = min(height[lb], height[rb]);
            int wd = rb - lb;

            int area = ht * wd;

            maxWater = max(maxWater, area);

            if(height[lb] < height[rb]){
                lb++;
            }else{
                rb--;
            }
        }
        return maxWater;
    }
};
```

##  Counting sort approach 



```
class Solution {
public:
    void sortColors(vector<int>& nums) {
       int n = nums.size();
       int red = 0, white = 0, blue = 0;

       for(int i =0; i<n; i++){
        if(nums[i] == 0){
            red++;
        } else if(nums[i] == 1){
            white++;
        }else{
            blue++;
        }
       }

        int idx =0;
        while(idx <n){
           if(red !=0 ){
            nums[idx] = 0;
            red--;idx++;

           } else if(white !=0){
            nums[idx] = 1;
            white--;idx++;

           } else if(blue != 0) {
            nums[idx]=2;
            blue--; idx++;
           }
        }
    }
};
```
## Dutch National Flag algorithm

```
class Solution {
public:
    void sortColors(vector<int>& nums) {

        int n = nums.size();
        int low = 0; 
        int mid = 0;
        int high = n-1;

        while(mid <= high){

            if(nums[mid] ==0){
                swap(nums[low],nums[mid]);
                low++;mid++;
            }
            else if(nums[mid] ==1){
                mid++;
            }else{
                swap(nums[high],nums[mid]);
                high--;
            }
        }
    }
};

```
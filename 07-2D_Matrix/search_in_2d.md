
### Problem No 74 on leetcode
```
class Solution {
public:

    bool searchInRow(vector<vector<int>>& matrix, int target, int row){
        int n = matrix[0].size();
        int st = 0;
        int end = n-1;

        while( st <= end){
            
            int mid = st + (end - st)/2;

            if(matrix[row][mid] == target) return true;
            else if(matrix[row][mid] < target) st = mid + 1;
            else end = mid - 1;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int stRow = 0;
        int endRow = m-1;

        while(stRow <= endRow ){
            
        int midRow = stRow + (endRow - stRow)/2;

            if( matrix[midRow][0] <= target && target <= matrix[midRow][n-1]){

                return searchInRow(matrix, target, midRow);

                } else if (matrix[midRow][0] > target){
                    endRow = midRow -1;
                } else if (matrix[midRow][n-1] < target){
                    stRow = midRow +1;
                }
        }

        return false;
    }
};
```
### Problem No 240 on leetcode
```
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        int row = 0;
        int col = n-1;
        while( row < m && col >= 0 ){
            if(matrix[row][col] == target ){
                return true;
            } else if ( target < matrix[row][col]){
                col--;
            } else if ( target > matrix[row][col]){
                row++;
            }
        }
        return false;
    }
};
```
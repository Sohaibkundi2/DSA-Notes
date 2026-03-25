## Spiral Matrix 
### Problem No 54 on leetCode

```
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        int srow = 0;
        int erow = m-1;
        int rcol = n-1;
        int lcol = 0;

        vector <int> ans;

        while( srow <= erow && lcol <= rcol){

            for(int j = lcol; j <= rcol; j++){
                ans.push_back(matrix[srow][j]);
            }

            for(int i = srow +1; i <= erow; i++){
                ans.push_back(matrix[i][rcol]);
            }
            if(srow < erow){
                for(int j = rcol -1; j >= lcol; j--){
                    ans.push_back(matrix[erow][j]);
                }
            }

            if(lcol < rcol){
                for(int i = erow -1; i > srow; i--){
                    ans.push_back(matrix[i][lcol]);
                }
            }
            srow++;
            rcol--;
            lcol++;
            erow--;

        
        }
        return ans;
    }
};
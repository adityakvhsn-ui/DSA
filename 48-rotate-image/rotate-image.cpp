class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
         int n=matrix.size();
        vector<vector<int>>temp(n,vector<int>(n,0));
        for(int row=0;row<n;row++)
        {
            for(int col=0;col<n;col++)
            {
                temp[col][n-row-1]=matrix[row][col];
            }
        }
        for(int row=0;row<n;row++)
        {
            for(int col=0;col<n;col++)
            {
                matrix[row][col]=temp[row][col];
            }
        }
        
    }
};
class Solution {
public:
    vector<int> genrow(int numRows)
    {
        vector<int> ansrow;
        long long ans=1;
        ansrow.push_back(1);
        for(int col=1;col<=numRows;col++)
        {
            ans=ans*(numRows+1-col);
            ans=ans/col;
            ansrow.push_back(ans);
        }
        return ansrow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> final;
        for(int row=1;row<=numRows;row++)
        {
            final.push_back(genrow(row-1));
        }
        return final;
        
    }
};
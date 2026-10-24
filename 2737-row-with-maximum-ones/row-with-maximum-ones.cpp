class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int count_max=0;
        int index=0;
        for(int i=0;i<n;i++)
        {   
            int count_ones=0;
            int ans=0;
            for(int j=m-1;j>=0;j--)
            {
                if(mat[i][j]==1)
                {
                    ans++;
                }
                if(ans>count_max)
                {
                    count_max=ans;
                    index=i;
                }
            }

        }
        return {index,count_max};
    }
};
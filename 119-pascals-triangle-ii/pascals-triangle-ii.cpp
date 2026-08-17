class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans(rowIndex+1);
        long long value=1;
        ans[0]=1;
        for(int i=1;i<=rowIndex;i++)
        {
            value=value*(rowIndex+1-i);
            value=value/i;
            ans[i]=value;
            
        }
        return ans;
    }
};
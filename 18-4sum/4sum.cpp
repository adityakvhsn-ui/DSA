class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        set<vector<int>>s;
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                set<long long>hashset;
                for(int k=j+1;k<n;k++)
                {
                    long long fourth=(long long)target-nums[i]-nums[j]-nums[k];
                    if(hashset.find(fourth)!=hashset.end())
                    {
                        vector<int> temp={nums[i],nums[j],nums[k],(int)fourth};
                        sort(temp.begin(),temp.end());
                        s.insert(temp);
                    }
                    hashset.insert(nums[k]);
                }
            }
        }
        vector<vector<int>> ans(s.begin(),s.end());
        return ans;
        
    }
};
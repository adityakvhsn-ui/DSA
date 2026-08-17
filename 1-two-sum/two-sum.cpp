class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            ans.push_back({nums[i],i});
        }
        sort(ans.begin(),ans.end());
        int left=0,right=n-1;
        while(right>left)
        {
            int sum=ans[left].first+ans[right].first;
            if(sum==target)
            return {ans[left].second,ans[right].second};
            else if(sum>target)
            right--;
            else
            left++;
        }
        return {-1,-1};
    }
};
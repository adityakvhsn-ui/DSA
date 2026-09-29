class Solution {
public:
    int sumofdivisor(vector<int>&nums,int limit )
    {   
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans+=ceil((double)(nums[i])/(double)limit);
        }
        return ans;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        if(nums.size()>threshold)
        return -1;
        int low=1;
        int ans;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(sumofdivisor(nums,mid)<=threshold)
            {   
                ans=mid;
                high=mid-1;
            }
            else
            low=mid+1;
        }
        return ans;
    }
};
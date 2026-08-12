class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele,count=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {   
            if(count==0)
            {
                count=1;
                ele=nums[i];
            }
            else if(nums[i]==ele)
            {
                count++;
            }
            else
            {
                count--;
            }
           
        }
        int cnt1=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==ele)
            {
                cnt1++;
            }
        }
        if(cnt1>(n/2))
        return ele;
        return -1;
    }
};
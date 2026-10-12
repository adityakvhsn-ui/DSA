class Solution {
public:
bool finder(int mid,int k,vector<int>&nums,int m)
{
    int count=0;
    int bcount=0;
    for(int i=0;i<nums.size();i++)
    {
      if(mid>=nums[i])
      {
        count++;
        if(count==k)
        {
            bcount++;
            count=0;
        }
      }
      else
      {
        count=0;
      }
    }
    return bcount>=m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
    int n=bloomDay.size();
    if((long long)m*k>n)
    {
        return -1;
    }
    int low=*min_element(bloomDay.begin(),bloomDay.end());
    int high=*max_element(bloomDay.begin(),bloomDay.end());
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(finder(mid,k,bloomDay,m))
        {
            high=mid-1;
        }
        else
            low=mid+1;
    }
    return low;
}    
};
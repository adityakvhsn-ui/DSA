class Solution {
public:
    long long sumofans(vector<int>&nums,int mid) 
{ 
    int n=nums.size(); 
    long long ans=0; 
    for(int i=0;i<n;i++) 
    { 
        ans+=ceil((double)nums[i]/(double)mid); 
    } 
    return ans; 
} 
    int minEatingSpeed(vector<int>& piles, int h) {
          long long low=1; 
          long long high=*max_element(piles.begin(),piles.end()); 
          while(low<=high) 
          { 
            long long mid=low+(high-low)/2; 
            long long a=sumofans(piles,mid); 
            if(a<=h) 
            { 
                high=mid-1; 
            } 
            else 
            low=mid+1; 
 
          } 
           return low; 
    } 
};
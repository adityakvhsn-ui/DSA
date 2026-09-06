class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        unordered_map<long long,int> prefixsummap;
        long long sum=0;
        prefixsummap[0]=1;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        
            long long rem=sum-k;
            if(prefixsummap.find(rem)!=prefixsummap.end())
            {
                count+=prefixsummap[rem];
                
            }
            prefixsummap[sum]++;
            

        }
        return count;

    }
};
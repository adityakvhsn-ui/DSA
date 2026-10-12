class Solution {
public:
       bool ans(vector<int>&weights,int days,int mid)
    {
        int requireddays=1;
        int curload=0;
        for(int w:weights)
        {
            if(curload+w>mid)
            {
                requireddays++;
                curload=0;
            }
            curload+=w;
        }
        return requireddays<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        // Your code goes here
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        int an=-1;
        while(low<=high)
        {   
            int mid=low+(high-low)/2;
            if(ans(weights,days,mid))
            {
                an=mid;
                high=mid-1;
            }
            else
            low=mid+1;
        }
        return an;
    }
};
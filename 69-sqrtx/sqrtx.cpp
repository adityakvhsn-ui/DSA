class Solution {
public:
    int mySqrt(int x) {
        if (x<2)
        {
            return x;
        }
        int low=0;
        int high=x;
        int ans=1;
        while(low<=high)
        {   

            int mid=low+(high-low)/2;
            
            if((long long)mid*mid<=x)
            {
                low=mid+1;
                ans=mid;
            }
            else
            {
                high=mid-1;
            }
        }
        return ans;
    }
};
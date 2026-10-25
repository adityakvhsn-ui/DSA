class Solution{
public:
 bool binarysearch(vector<int>&mat,int target)
    {
        int n=mat.size();
        int low=0,high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(mat[mid]==target)
            return true;
            else if(target>mat[mid])
            low=mid+1;
            else
            high=mid-1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>> &mat, int target){
        int n=mat.size();
        int m=mat[0].size();
        int low=0,high=n-1;
        for(int i=0;i<n;i++)
        {

                bool flag= binarysearch(mat[i],target);
                if(flag) return true;
        }
        return false;
    }
};
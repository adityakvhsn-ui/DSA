class Solution {
public:
    bool isPowerOfTwo(int n) {
    if (n==0 || n < 0)
    return false;
    int x=n-1;
    int ans=n & x;
    return (ans==0);
    }
};
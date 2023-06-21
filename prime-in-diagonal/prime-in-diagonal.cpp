class Solution {
public:
    bool isp(int n)
    {
        if(n<=1)return 0;
        if(n==2 || n==3)return 1;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0)return 0;
        }
        return 1;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int p=0,n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(isp(nums[i][i]))p=max(p,nums[i][i]);
            if(isp(nums[n-1-i][i]))p=max(p,nums[n-1-i][i]);
        }
        return p;
    }
};
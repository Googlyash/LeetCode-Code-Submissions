//POTD -20/6
//Self

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        long long n=nums.size(),l=0,j,i,sum=0;
        vector<int>v(n,-1);
        if(n<2*k+1)return v;
        for(int i=0;i<=2*k;i++){
            sum+=nums[i];
        }
        v[k]=sum/(2*k+1);
        for(int i=k+1;i<n-k;i++){
            sum+=nums[i+k];
            sum-=nums[i-k-1];
            v[i]=sum/(2*k+1);
        }
        return v;
    }
};
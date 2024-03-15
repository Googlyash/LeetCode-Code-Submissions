//POTD Mar'15, 2024
//Mar'15, 2024 04:04 pm

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        // long long ans=1;
        vector<int> pre(n+1, 1), suf(n+1, 1), v(n);
        for(int i=0;i<n;i++){
            pre[i+1]=nums[i]*pre[i];
            suf[n-1-i]= suf[n-i]*nums[n-1-i];
        }
        for(int i=0;i<n;i++){
            v[i]= pre[i]*suf[i+1];
        }
        return v;
    }
};

//5 min
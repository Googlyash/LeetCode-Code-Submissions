//Aug'29, 2023 11:05 am

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        vector<int>pre(n+1, 0);
        map<int, int>mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+nums[i];
            ans+=mp[pre[i+1]-k];
            mp[pre[i+1]]++;
            // mp[pre[i+1]]+=mp[pre[i+1]-k];
            cout<<mp[pre[i+1]-k]<<endl;
        }
        return ans;
    }
};
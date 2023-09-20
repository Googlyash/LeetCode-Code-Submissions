//POTD Sep'20, 2023
//Sep'20, 2023 02:52 pm
//Comments: 51min
//Second Method: map+prefix sum
//O(n)

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int ans=1e7, sum=0, cursum=0;
        for(auto it:nums){
            sum+=it;
        }
        
        unordered_map<int, int>mp;
        mp[0]=0;
        vector<int>pre(n+1, 0);
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+nums[i];
        }
        for(int i=0;i<n;i++){
            mp[pre[i+1]]=i+1;
        }
        
        if( mp.find(x)!=mp.end()){
            ans=min(ans, mp[x]);
        }
        for(int i=n-1;i>=0; i--){
            cursum+=nums[i];
            int midsum=x-cursum;
            if( mp.find(midsum)!=mp.end()){
                ans=min(ans, mp[midsum]+n-i);
            }
        }
        return (ans>n)?-1: ans;
    }
};
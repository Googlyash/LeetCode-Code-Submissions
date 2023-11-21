//POTD Nov'22, 2023
//Nov'22, 2023 03:52 pm

class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        int n=nums.size(), ans=0, mod=1e9+7;
        map<long long, int>mp;
        for(int i=0;i<n;i++){
            string s=to_string(nums[i]);
            reverse(s.begin(), s.end());
            long long k=stoll(s);
            mp[nums[i]-k]++;
        }
        for(auto it:mp){
            long long cur=0;
            cur= (long long)it.second*(it.second-1)/2;
            ans+=(cur%mod);
            ans%=mod;
        }
        return ans;
    }
};

//3 mins
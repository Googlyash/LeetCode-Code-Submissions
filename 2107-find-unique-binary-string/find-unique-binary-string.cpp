// POTD Feb'20, 2025
// Feb'20, 2025 11:41 pm

class Solution {
    void solve(int n, string &ans, string s, int flag, map<string, int>&mp){
        if(flag){
            return ;
        }
        if(s.size()== n){
            if(mp.find(s)==mp.end()){
                ans= s;
                flag=1;
            }
            return;
        }

        s+='0';
        solve(n, ans, s, flag, mp);
        s.pop_back();

        s+='1';
        solve(n, ans, s, flag, mp);
        s.pop_back();
    }
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n= nums.size();
        map<string, int>mp;
        for(auto it:nums){
            mp[it]++;
        }

        int flag=0;
        string ans;
        vector<string>v;
        solve(nums.size(), ans, "", flag, mp);
        return ans;
    }
};

// 9 min
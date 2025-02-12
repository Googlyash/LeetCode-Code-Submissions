// POTD Feb'12, 2025
// Feb'12, 2025 10:19 am

class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int n= nums.size();
        map<int, vector<int>>mp;

        for(auto it:nums){
            int cur= it, sum=0;
            while(cur){
                sum+= cur%10;
                cur/=10;
            }

            mp[sum].push_back(it);
        }

        int ans=-1;
        for(auto it:mp){
            vector<int>vcur= it.second;
            int cursz= vcur.size();
            sort(vcur.begin(), vcur.end());
            if(vcur.size()>1){
                ans= max(ans, vcur[cursz-1]+ vcur[cursz-2]);
            }
        }

        return ans;
    }
};

// 5 min
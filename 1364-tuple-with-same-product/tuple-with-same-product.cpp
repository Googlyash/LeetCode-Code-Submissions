// POTD Feb'6, 2025
// Feb'6, 2025 05:30 pm

class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n= nums.size();

        map<long long, vector<int>>mp;
        for(int i=0;i<n;i++){
            for(int j=i+1; j<n;j++){
                long long prod= nums[i]* nums[j];
                if(nums[i]!=nums[j]){
                    mp[prod].push_back(nums[i]);
                    mp[prod].push_back(nums[j]);
                }
            }
        }

        int ans=0;
        for(auto it:mp){
            vector<int>v= it.second;

            int sz= v.size();
            // cout<<it.first<<" "<<sz<<endl;
            long long cur= (sz/2)*(sz/2-1)*4;
            // cur*=8;
            ans+=cur;
        }

        return ans;
    }
};

// 20 min
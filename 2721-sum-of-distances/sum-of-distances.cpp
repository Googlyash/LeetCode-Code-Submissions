// POTD Apr'23, 2026
// Apr'23, 2026 11:51 pm

class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n= nums.size();
        map<int, vector<int>>mp;
        vector<long long> ans(n);
        
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }

        for(auto &it: mp){
            auto &v= it.second;

            long long sum=0;
            for(auto x: v){
                sum+=x;
            }

            long long leftSum=0;
            int m= v.size();

            for(int i=0;i<m;i++){
                long long rightSum= sum - leftSum - v[i];

                long long left= 1LL * v[i] * i - leftSum;
                long long right= rightSum - 1LL * v[i] * (m-1-i);
                ans[v[i]]= left+ right;

                leftSum+= v[i];
            }
        }
        return ans;
    }
};

// 21 min
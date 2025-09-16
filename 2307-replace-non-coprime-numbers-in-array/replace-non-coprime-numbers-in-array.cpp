// POTD Sep'16, 2025
// Sep'16, 2025 09:32 pm

class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        int n= nums.size();

        vector<int>ans;
        ans.push_back(nums[0]);
        for(int i=1;i<n;i++){
            int cur= nums[i], push= nums[i];
            while(ans.size()!=0 && gcd(ans.back(), cur)!=1){
                cur= lcm(ans.back(), cur);
                ans.pop_back();
            }
            ans.push_back(cur);
        }

        cout<<gcd(15, 5);
        return ans;
    }
};

// 13 min
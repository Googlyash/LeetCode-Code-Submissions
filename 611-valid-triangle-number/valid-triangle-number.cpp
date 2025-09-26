// POTD Sep'26, 2025
// Sep'26, 2025 09:54 pm

class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n= nums.size(), ans=0;

        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int rem= nums[i]+ nums[j];

                int cnt= lower_bound(nums.begin(), nums.end(), rem) - nums.begin();
                // cout<<cnt - j - 1<<" ";
                ans+= max(cnt - j - 1, 0);
            }
        }

        return ans;
    }
};

// 15 min
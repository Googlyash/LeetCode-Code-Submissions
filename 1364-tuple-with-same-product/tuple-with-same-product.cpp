// POTD Feb'6, 2025
// Feb'6, 2025 05:30 pm

class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n= nums.size();

        int ans=0;
        map<int, int>mp;
        for(int i=0;i<n;i++){
            for(int j=i+1; j<n;j++){
                int prod= nums[i]* nums[j];
                ans+= 8* mp[prod];
                mp[prod]++;
            }
        }
        return ans;
    }
};

// 20 min
// Earlier solved
// POTD Dec'9, 2025
// Dec'9, 2025 11:36 pm

class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        int n= nums.size();
        int ans=0, mod= 1e9+7;
        map<int, long>one, two;
        for(int i=0;i<n;i++){
            int cur= nums[i];
            if(cur%2==0 && two.contains(cur/2)){
                ans+= two[cur/2];
                ans%= mod;
            }
            if(one.contains(cur*2)){
                two[cur]+= one[cur*2];
                two[cur]%=mod;
            }
            one[cur]++;
        }
        return ans;
    }
};

// 17 min
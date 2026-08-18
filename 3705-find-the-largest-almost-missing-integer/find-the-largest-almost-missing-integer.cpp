// POTD Aug'18, 2026
// Aug'18, 2026 10:07 pm

class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n= nums.size();
        if(k==n){
            auto ans= ranges::max_element(nums);
            return *ans;
        }
        int rt= nums[0], lf= nums[n-1], mx=-1;
        unordered_map<int, int>mp;

        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]== nums[0]){
                rt= -1;
            }
            if(nums[i]== nums[nums.size()-1]){
                lf= -1;
            }
        }
        if(rt==lf && k!=1){
            return -1;
        }
        if(k!=1)return max(rt, lf);
        for(auto it: nums)mp[it]++;
        for(auto it:mp){
            cout<<it.second<<endl;
            if(it.second==1)mx= max(it.first, mx);
        }
        return mx;
    }
};

// 15 min
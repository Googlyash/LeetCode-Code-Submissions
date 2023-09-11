//Sep'11, 2023 05:13 pm

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1)return 0;
        // sort(nums.begin(), nums.end());
        int l=0, r=n-1, ans=0;
        map<int, int>mp, mp1;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(nums[i]!= k-nums[i])
                ans+= min(mp[nums[i]], mp[k-nums[i]]);
            else {
                ans+=mp[nums[i]]/2;
            }
            mp[nums[i]]=0;
            cout<<ans<<" ";
        }
        // while(l<n && l<r){
        //     while(r>l && nums[l]+nums[r]>k){
        //         r--;
        //     }
        //     if(nums[l]+nums[r]==k){
        //         ans++;
        //     }
        //     r--;
        //     l++;
        // }
        return ans;
    }
};
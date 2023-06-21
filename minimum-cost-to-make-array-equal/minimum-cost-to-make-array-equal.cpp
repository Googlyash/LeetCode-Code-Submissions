class Solution {
    #define ll long long
public:
    ll func(vector<int>&nums, vector<int>&cost, int mid){
        ll ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=1L*abs(nums[i]-mid)*cost[i];
        }
        return ans;
    }
    long long minCost(vector<int>& nums, vector<int>& cost) {
        ll l=1,r=1e6, ans=func(nums,cost,1);
        while(l<r){
            int mid=l+(r-l)/2;
            ll a1=func(nums,cost,mid),a2=func(nums,cost,mid+1);
            ans=min(a1,a2);
            if(a1<a2){
                r=mid;
            }
            else
                l=mid+1;
        }
        return ans;
    }
};
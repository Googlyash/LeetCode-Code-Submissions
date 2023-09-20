//POTD Sep'20, 2023
//Sep'20, 2023 02:52 pm
//Comments: 51min

class Solution {
// private:
//     int solve(int l, int r, vector<int>&nums, int x, vector<int>&dpl, vector<int>&dpr){
//         if(l>r){
//             return (x==0)?0: 1e7;
//         }
//         if(x==0){
//             return 0;
//         }
        
//         if(nums[l]<=x ){
//             if(dpl[l]!=-1)dpl[l]=min(1+ solve(l+1, r, nums, x-nums[l], dpl, dpr), dpl[l]);
//             else dpl[l]=1+ solve(l+1, r, nums, x-nums[l], dpl, dpr);
//         }
//         if(nums[r]<=x){
//            if(dpr[r]!=-1) dpr[r]=min(1+ solve(l, r-1, nums, x-nums[r], dpl, dpr), dpr[r]);
//            else dpr[r]= 1+ solve(l, r-1, nums, x-nums[r], dpl, dpr);
//         }

//         return min(dpl[l], dpr[r]);
//     }
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int l=0, r=0;
        int ans=-1, sum=0, cursum=0;
        for(auto it:nums){
            sum+=it;
        }
        while(r<n ){
            cursum+=nums[r];
            while(l<=r && cursum>sum-x){
                cursum-=nums[l++];
            }
            if(cursum==sum-x){
                ans=max(ans, r-l+1);
            }
            r++;
        }
        // while(l<=r && x>0){
        //     if(nums[l]> nums[r]){
        //         if(nums[l]<=x){
        //             ans++;
        //             x-=nums[l++];
        //         }
        //         else if(nums[r]<=x){
        //             ans++;
        //             x-=nums[r--];
        //         }
        //         else {
        //             break;
        //         }
        //     }
        //     else {
        //         if(nums[r]<=x){
        //             ans++;
        //             x-=nums[r--];
        //         }
        //         else if(nums[l]<=x){
        //             ans++;
        //             x-=nums[l++];
        //         }
        //         else {
        //             break;
        //         }
        //     }
        //     cout<<"l= "<<l<<" r= "<<r<<" x= "<<x<<endl;
        // }
        return (ans==-1)?-1: n-ans;
        // if(x==0)return n+l-r-1;
        // if(l>r)return -1;
        // else return max(ans-2, -1);
    }
};
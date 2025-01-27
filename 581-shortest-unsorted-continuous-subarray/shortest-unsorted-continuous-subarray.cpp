// Jan'27, 2025 09:34 pm

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n= nums.size();

        int l=0, r=n-1, lnums= nums[0], rnums=nums[n-1];
        for(int i=1;i<n;i++){
            if(nums[i]>=nums[i-1]){
                l=i;
            }
            else {
                break;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(nums[i]<=nums[i+1]){
                r=i;
            }
            else {
                break;
            }
        }

        for(int i=l+1;i<n;i++){
            if(nums[i]<nums[l]){
                while(l>=0 && nums[i]<nums[l]){
                    l--;
                }
                if(l<0){
                    break;
                }
            }
        }
        for(int i=r-1;i>=0;i--){
            if(nums[i]>nums[r]){
                while(r<=n-1 && nums[i]>nums[r]){
                    r++;
                }
                if(r>=n){
                    break;
                }
            }
        }

        return max((r-l-1), 0);
    }
};

// 21 min
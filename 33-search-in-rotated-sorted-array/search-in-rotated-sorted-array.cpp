// POTD May'22, 2026
// May'23, 2026 12:00 am
// Binary Search Practice

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        int l=0, r=n-1;

        while(l<=r){
            int mid= l+ (r-l)/2;

            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>=nums[l]){
                if(nums[mid]>=target && target>=nums[l]){
                    r= mid-1;
                }
                else {
                    l=mid+1;
                }
            }
            else {
                if(nums[r]>=target && target>=nums[mid]){
                    l=mid+1;
                }
                else {
                    r=mid-1;
                }
            }
        }
        return -1;
    }
};

// Earlier Solved
// 10 min
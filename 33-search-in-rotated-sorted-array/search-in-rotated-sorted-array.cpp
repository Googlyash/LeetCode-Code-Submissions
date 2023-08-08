//Striver: Binary Search
//POTD Aug'8, 2023 09:39 pm

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0, r=n-1, ans=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            
            if(nums[mid]==target)return mid;
            
            if(nums[l]<=nums[mid]){
               if(nums[l]<=target && nums[mid]>=target){
                  r=mid-1;
               }
               else l=mid+1;
            }
            else {
                if(nums[mid]<=target && target<=nums[r]){
                    l=mid+1;
                }
                else r=mid-1;
            }
        }
        return -1;
    }
};
//Self-Solved
//Easy

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r=0,b=0,g=nums.size()-1;
       
       while(r<=g){
           if(nums[r]==0){
              swap(nums[r],nums[b]);
               r++;
               b++;
           }
           else if(nums[r]==1){
               r++;
           }
           else {
               swap(nums[g],nums[r]);
               g--;
           }
       }
    }
};
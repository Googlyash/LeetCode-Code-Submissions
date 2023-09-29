//POTD Sep'29, 2023
//Sep'29, 2023 02:53 pm

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size(), flag=0;
        if(n==1)return true;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                if(flag==2)return false;
                flag=1;
            }
            else if(nums[i]<nums[i-1]){
                if(flag==1)return false;
                flag=2;
            }
        }
        return true;
    }
};
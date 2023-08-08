//Striver day2
// PigeonHole Principle: Beautiful

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size(), dupli=0;

        for(int i=0;i<n;i++){
            int cur=abs(nums[i]);
            if(nums[cur]<0){
                dupli=cur;
                break;
            }
            nums[cur]*=-1;
        }

        for(int i=0;i<n;i++){
            nums[i]=abs(nums[i]);
        }
        return dupli;
    }
};
//Striver SDE: Day7 Arrays
//Sep'14, 2023 12:41 pm

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1, j=1;
        int n=nums.size();
        while(j<n){
            if(nums[j]!=nums[j-1]){
                nums[i++]=nums[j++];
            }
            else j++;
        }
        return i;
    }
};

//2 Min
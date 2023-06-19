//Self-Solved
//Easy

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r=0,b=0,g=0;
        int n=nums.size(),i;
        for(i=0;i<n;i++){
            if(nums[i]%3==0)r++;
            else if(nums[i]%3==1)b++;
            else g++;
        }
        for(i=0;i<n;i++)
        {
            if(r>0){
                nums[i]=0;
                r--;
            }
            else if(b>0)
            {
                nums[i]=1;
                b--;
            }
            else
            {
                nums[i]=2;
                g--;
            }
        }
    }
};
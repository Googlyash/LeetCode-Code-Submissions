//Sliding Window
//Sep'29, 2023 06:48 pm

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0, cnt=0, j=-1, pro=1;
        while(++j<n){
            pro*=nums[j];
            while(i<j && pro>=k){
                pro/=nums[i++];
            }
            if(pro<k){
                cnt+=(j-i+1);
            }
        }
        return cnt;
    }
};

//Self: 3 min
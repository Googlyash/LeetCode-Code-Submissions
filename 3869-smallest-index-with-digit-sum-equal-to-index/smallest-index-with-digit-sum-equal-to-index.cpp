// POTD Sep'24, 2026
// Sep'24, 2026 09:22 pm

class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n= nums.size();
        for(int i=0;i<n;i++){
            int cur=0;
            while(nums[i]){
                cur+= nums[i]%10;
                nums[i]/=10;
            }
            if(cur==i){
                return i;
            }
        }
        return -1;
    }
};

// 2 min
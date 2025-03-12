// POTD Mar'12, 2025
// Mar'12, 2025 10:14 pm

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n= nums.size();

        int ng=0, pos=0;
        for(auto it:nums){
            if(it<0){
                ng++;
            }
            else if(it>0){
                pos++;
            }
        }

        return max(pos, ng);
    }
};

// 2 min
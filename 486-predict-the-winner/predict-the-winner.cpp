// POTD Aug'22, 2026
// Aug'22, 2026 09:40 pm

class Solution {
    int solve(int l, int r, int chance, vector<int>&nums){
        int n= nums.size();
        if(l<0 || r>=n || l>r){
            return 0;
        }
        if(l==r){
            return nums[l];
        }
        if(chance){
            return min(-nums[l]+solve(l+1, r, 1-chance, nums), -nums[r]+solve(l, r-1, 1-chance, nums));
        }
        else {
            return max(nums[l]+solve(l+1, r, 1-chance, nums), nums[r]+solve(l, r-1, 1-chance, nums));
        }
    }
public:
    bool predictTheWinner(vector<int>& nums) {
        int n= nums.size();

        return solve(0, n-1, 0, nums) >= 0;
    }
};

// 5 min
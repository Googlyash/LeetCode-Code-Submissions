// POTD Nov'3, 2026
// Nov'3, 2026 07:29 pm

class Solution {
    public int minMoves(int[] nums) {
        int n= nums.length;

        int mx=0;
        for(int i=0;i<n;i++){
            mx= Math.max(mx, nums[i]);
        }

        int ans=0;
        for(int i=0;i<n;i++){
            ans+= mx-nums[i];
        }
        return ans;
    }
}

// 2 min
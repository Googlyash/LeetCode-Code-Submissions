// POTD Nov'2, 2026
// Nov'3, 2026 01:07 am

class Solution {
    public int minMoves2(int[] nums) {
        int n= nums.length;
        Arrays.sort(nums);

        int median= nums[n/2];
        int ans=0;
        for(int i=0;i<n;i++){
            ans+= Math.abs(nums[i] - median);
        }
        return ans;
    }
}

// Comments
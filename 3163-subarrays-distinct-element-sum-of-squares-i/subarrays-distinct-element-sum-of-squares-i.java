// POTD Oct'15, 2026
// Oct'15, 2026 11:45 pm

class Solution {
    public int sumCounts(List<Integer> nums) {
        int n= nums.size();

        int ans=0;
        for(int i=0;i<n;i++){
            HashSet<Integer> s= new HashSet();
            for(int j=i;j<n;j++){
                s.add(nums.get(j));
                int sz= s.size();
                ans+= sz*sz;
            }
        }
        return ans;
    }
}

// 6 min
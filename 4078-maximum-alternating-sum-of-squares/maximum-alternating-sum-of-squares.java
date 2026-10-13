// POTD Oct'13, 2026
// Oct'13, 2026 11:34 pm

class Solution {
    public long maxAlternatingSum(int[] nums) {
        int n= nums.length;

        int[] check= Arrays.stream(nums)
                .boxed()
                .sorted(Comparator.comparingInt(Math::abs))
                .mapToInt(Integer::intValue)
                .toArray();

        long ans=0;
        for(int i=0;i<n;i++){
            if(i<n/2){
                ans-= (check[i]*check[i]);
            }
            else {
                ans+= (check[i]*check[i]);
            }
        }
        return ans;
    }
}

// 4 min
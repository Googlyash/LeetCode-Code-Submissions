// POTD Oct'12, 2026
// Oct'12, 2026 11:26 pm

class Solution {
    public int maxSum(List<Integer> nums, int k) {
        int n= nums.size();

        int mod= (int) 1e9+7;
        int[] cnt= new int[30];

        for(int i=0;i<n;i++){
            int x= nums.get(i);
            for(int b=0;b<30;b++){
                cnt[b] += (x >> b) & 1;
            }
        }

        long sum= 0;
        for(int i=0;i<k;i++){
            long row= 0;
            for(int b=0;b<30;b++){
                if(cnt[b]>i){
                    row |= 1L << b;
                }
            }
            sum+= (row*row)%mod;
            sum%= mod;
        }
        return (int)sum;
    }
}

// Comments
// POTD Sep'30, 2026
// Sep'30, 2026 11:50 pm

class Solution {
    public int[] maxDepthAfterSplit(String seq) {
        int n= seq.length();

        int cnt=0;
        // ArrayList<Integer> ans= new ArrayList<>();
        int[] ans= new int[n];
        for(int i=0;i<n;i++){
            char c= seq.charAt(i);
            if(c=='('){
                cnt++;
                ans[i]= cnt%2;
            }
            else {
                ans[i]= cnt%2;
                cnt--;
            }
        }
        return ans;
    }
}

// 7 min
// 1st Java soln.
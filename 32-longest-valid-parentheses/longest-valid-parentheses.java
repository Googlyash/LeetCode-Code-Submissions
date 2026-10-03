// POTD Oct'3, 2026
// Oct'4, 2026 01:32 am

class Solution {
    public int longestValidParentheses(String s) {
        int n= s.length();

        int l=0, r=0, cnt=0, ans=0;
        while(r<n){
            char c= s.charAt(r);
            if(c=='('){
                cnt++;
            }
            else {
                cnt--;
            }
            if(cnt==0){
                ans= Math.max(ans, r-l+1);
            }
            if(cnt<0){
                ans= Math.max(ans, r-l);
                l=r+1;
                cnt=0;
            }
            r++;
        }
        if(cnt==0){
            ans= Math.max(ans, r-l);
        }
        r=n-1;
        l=r;
        cnt=0;
        while(l>=0){
            char c= s.charAt(l);
            if(c=='('){
                cnt--;
            }
            else {
                cnt++;
            }
            if(cnt==0){
                ans= Math.max(ans, r-l+1);
            }
            if(cnt<0){
                ans= Math.max(ans, r-l);
                r=l-1;
                cnt=0;
            }
            l--;
        }
        if(cnt==0){
            ans= Math.max(ans, r-l);
        }
        return ans;
    }
}

// 22 min
// 4th java submission
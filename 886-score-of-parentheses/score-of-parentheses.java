// POTD Oct'5, 2026
// Oct'5, 2026 10:12 pm

class Solution {
    public int scoreOfParentheses(String s) {
        int ans=0, n= s.length();

        int cnt=-1, mx=0;
        char pre='(';
        for(int i=0;i<n;i++){
            char c= s.charAt(i);
            if(c=='('){
                cnt++;
                if(c!=pre){
                    ans+= (int) Math.pow(2, mx);
                }
            }
            else if(c==')'){
                if(c!=pre){
                    mx= cnt;
                }
                cnt--;
            }

            pre=c;
        }
        ans+= (int) Math.pow(2, mx);
        return ans;
    }
}

// 11 min
// 6th Java solution
// POTD Oct'6, 2026
// Oct'6, 2026 10:38 pm

class Solution {
    public int minAddToMakeValid(String s) {
        int n= s.length();

        int cnt=0, ans=0;
        for(int i=0;i<n;i++){
            char c= s.charAt(i);
            if(c=='('){
                if(i>0 && cnt<0){
                    char pre= s.charAt(i-1);
                    if(pre== ')'){
                        ans -=cnt;
                        cnt=0;
                    }
                }
                cnt++;
            }
            else if(c==')'){
                cnt--;
            }
        }
        ans+= Math.abs(cnt);
        return ans;
    }
}

// 7 min
// 8th Java submission
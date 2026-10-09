// POTD Oct'9, 2026
// Oct'9, 2026 11:24 pm

class Solution {
    public int minInsertions(String s) {
        int n= s.length();

        int check=0, ans=0;
        for(int i=n-1;i>=0;i--){
            char c= s.charAt(i);

            if(c=='('){
                check-=2;
            }
            else {
                check+=2;
                System.out.println(i);
                if(i==0 || s.charAt(i-1)!=')'){
                    ans++;
                }
                else {
                    i--;
                }
            }
            if(check<0){
                ans-= check;
                check=0;
            }
        }
        System.out.println(ans);
        System.out.println(check);
        ans+= (check+1)/2 + check%2;
        return ans;
    }
}

// 15 min
// 10th Java submission
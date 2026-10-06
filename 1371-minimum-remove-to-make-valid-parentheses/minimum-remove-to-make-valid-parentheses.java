// Oct'6, 2026 11:03 pm

class Solution {
    public String minRemoveToMakeValid(String s) {
        int n= s.length();
        int cnt=0, open=0;
        for(int i=0;i<n;i++){
            char c= s.charAt(i);
            if(c=='('){
                open++;
            }
            else if(c==')'){
                if(open==0){
                    cnt++;
                }
                else {
                    open--;
                }
            }
        }
        if(cnt==0 && open==0){
            return s;
        }
        StringBuilder s1= new StringBuilder();
        for(int i=0;i<n;i++){
            char c= s.charAt(i);
            if(cnt>0 && c==')'){
                cnt--;
                continue;
            }
            s1.append(c);
        }
        String res= s1.toString();

        if(open==0){
            return res;
        }

        StringBuilder s2= new StringBuilder();
        for(int i= res.length()-1; i>=0;i--){
            char c= res.charAt(i);
            if(open>0 && c=='('){
                open--;
                continue;
            }
            s2.append(c);
        }
        String ans= s2.reverse().toString();
        return ans;
    }
}

// 10 min
// 9th Java submission
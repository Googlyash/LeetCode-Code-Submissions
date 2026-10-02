// POTD Oct'2, 2026
// Oct'3, 2026 01:54 am

class Solution {
    void solve(int r, int l, String s, List<String>ans){
        if( r<0 || l<0){
            return;
        }
        if(r==0 && l==0){
            ans.add(s);
            return;
        }
        if(r>0){
            char c= '(';

            StringBuilder s1= new StringBuilder(s);
            s1.append(c);

            String res= s1.toString();
            solve(r-1, l, res, ans);

        }
        if(r<l){
            char c= ')';

            StringBuilder s1= new StringBuilder(s);
            s1.append(c);

            String res= s1.toString();
            solve(r, l-1, res, ans);
        }
    }
    public List<String> generateParenthesis(int n) {
        List<String> ans= new ArrayList<>();

        solve(n, n, "", ans);
        return ans;
    }
}

// 11 min
// 3rd java submission
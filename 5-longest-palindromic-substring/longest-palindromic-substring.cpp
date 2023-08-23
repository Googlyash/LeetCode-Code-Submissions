//Aug'22, 2023 10:54 pm
//Comments

class Solution {
private: 
    string ans="";
    void expand(string&s, int l, int r){
        while(l>=0 && r<s.size()){
            if(s[l]!= s[r]){
                break;
            }
            l--,r++;
        }
        if(ans.size()<r-l){
            ans=s.substr(l+1, r-l-1);
        }
    }
public:
    string longestPalindrome(string s) {
        int n=s.size();
        for(int i=0;i<n;i++){
           expand(s, i, i);
           expand(s,i,i+1);
        }
        return ans;
    }
};
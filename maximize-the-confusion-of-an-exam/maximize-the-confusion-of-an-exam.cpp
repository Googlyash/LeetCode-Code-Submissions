//POTD July'7,2023
//Hariom's solution
class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        int n=s.size();
        int l=0,r=0,ct=0,cf=0, ans=0, cur;

        while(r<n){
            if(s[r]=='T'){ct++;}
            else cf++;
            
            cur=min(ct,cf);
            while(cur>k){
                if(s[l]=='T')ct--;
                else cf--;
                cur=min(ct,cf);
                l++;
            }
            r++;
            ans=max(ans, r-l);
        }
        return ans;
    }
};
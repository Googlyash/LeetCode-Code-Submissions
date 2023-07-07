//POTD July'7,2023
//Comments
class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        int n=s.size();
        int l=0,r=0,ct=0,cf=0, ans=0;

        unordered_map<char,int>mp;

        for(int i=0;i<n;i++){
            mp[s[i]]++;

            ans=max(ans, mp[s[i]]);

            if(i-l+1> ans+k){
                mp[s[l]]--;
                l++;
            }
        }
        return n-l;
        // int t=0,f=0;
        // for(int i=0;i<n;i++){
        //     if(s[i]=='F')f++;
        //     else t++;
        // }
        // if(f<=k || t<=k){
        //     return n;
        // }
        // while(r<n){
        //     if(s[r]=='T'){ct++;}
        //     else cf++;

        //     if(l<=r && s[l]=='T' && cf>k){
        //         ans=max(ans, r-l);
        //         if(ct<=k)ans=max(ans, r-l+1);
        //         l++;
        //         ct--;
        //     }
        //     if(l<=r && s[l]=='F' && ct>k){
        //         ans=max(ans, r-l);
        //         if(cf<=k)ans=max(ans, r-l+1);
        //         l++;
        //         cf--;
        //     }
        //     r++;
        // }
        
        // ans=max(ans, r-l);
        return ans;
    }
};
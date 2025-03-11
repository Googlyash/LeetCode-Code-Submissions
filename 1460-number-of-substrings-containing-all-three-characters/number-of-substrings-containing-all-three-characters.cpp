// POTD Mar'11, 2025
// Mar'11, 2025 09:53 pm

class Solution {
public:
    int numberOfSubstrings(string s) {
        int n= s.size(), ans=0;
        int la=n, lb=n, lc=n;


        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                la=i;
            }
            else if(s[i]=='b'){
                lb= i;
            }
            else {
                lc= i;
            }
            if(la<=i && lb<=i && lc<=i){
                ans+= min({la, lb, lc})+1;
            }
        }

        return ans;
    }
};

// 4 min
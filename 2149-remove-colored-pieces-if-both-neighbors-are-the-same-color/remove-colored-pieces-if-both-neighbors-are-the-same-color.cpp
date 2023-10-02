//potd Oct'2, 2023 
//Oct'2, 2023 11:34 am

class Solution {
public:
    bool winnerOfGame(string s) {
        int ans=0, n=s.size(), a=0, b=0;
        for(int i=1; i<n-1; i++){
            if(s[i-1]==s[i] && s[i]==s[i+1]){
                if(s[i]=='A')a++;
                else b++;
            }
        }
        return (a>b);
    }
};
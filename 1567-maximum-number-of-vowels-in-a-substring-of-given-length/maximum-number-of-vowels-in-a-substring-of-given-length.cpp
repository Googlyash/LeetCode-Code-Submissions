// Jan'16, 2025 07:24 pm

class Solution {
public:
    int maxVowels(string s, int k) {
        int n= s.size();
        int cur=0, ans=0;

        for(int i=0;i<k;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                cur++;
            }
        }
        ans= max(ans, cur);
        for(int i=k;i<n;i++){
            char c= s[i];
            char d= s[i-k];
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                cur++;
            }
            if(d=='a' || d=='e' || d=='i' || d=='o' || d=='u'){
                cur--;
            }
            ans= max(ans, cur);
        }

        return ans;
    }
};

// 4 min
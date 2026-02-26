// POTD Feb'26, 2026
// Feb'26, 2026 11:06 pm

class Solution {
public:
    int numSteps(string s) {
        int n= s.size(), ans=0;

        reverse(s.begin(), s.end());
        for(int i=0;i<s.size()-1; i++){
            if(s[i]=='1'){
                int j=i;
                // s[j]='0';
                int curn= s.size();
                while(j<n && s[j]=='1'){
                    s[j]= '0';
                    if(j== n-1){
                        s+= '1';
                    }
                    else {
                        if(s[j+1]=='0'){
                            s[j+1]='1';
                            break;
                        }
                    }
                    j++;
                }
                i--;
            }
            ans++;
        }
        return ans;
    }
};

// 17 min
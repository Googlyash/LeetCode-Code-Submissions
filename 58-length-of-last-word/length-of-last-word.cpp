//POTD Apr'1, 2024
//Apr'2, 2024 03:42 am

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size(), ans=0, flag=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==' ' && flag==0){
                continue;
            }
            else if(s[i]==' '){
                return ans;
            }
            else {
                flag=1;
                ans++;
            }
        }
        return ans;
    }
};

//2 min
// POTD Aug'14, 2025
// Aug'14, 2025 06:02 pm

class Solution {
public:
    string largestGoodInteger(string num) {
        int n= num.size();

        string s;
        for(int i=0;i<n-2;i++){
            if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                if(s.size()==0 ){
                    s+= num[i];
                    s+= num[i];
                    s+= num[i];
                }
                else if(s[0]<=num[i]){
                    s[0]=num[i];
                    s[1]= s[0];
                    s[2]= s[0];
                }
            }
        }
        return s;
    }
};

// 6 min
//POTD Mar'1, 2024
//Mar'1, 2024 11:00 pm

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                cnt++;
            }
        }
        s[n-1]='1';
        for(int i=0;i<cnt-1;i++){
            s[i]='1';
        }
        for(int i=cnt-1; i<n-1; i++){
            s[i]='0';
        }
        return s;
    }
};

//Earlier solved
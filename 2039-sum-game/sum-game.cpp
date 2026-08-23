// POTD Aug'23, 2026
// Aug'23, 2026 08:06 pm

class Solution {
public:
    bool sumGame(string num) {
        int n= num.size();

        int cnt=0, lfSum=0, lfCnt=0, rtCnt=0, rtSum=0;
        for(int i=0;i<n;i++){
            if(i<n/2){
                if(num[i]=='?'){
                    lfCnt++;
                }
                else {
                    lfSum+= num[i]-'0';
                }
            }
            else {
                if(num[i]=='?'){
                    rtCnt++;
                }
                else {
                    rtSum+= num[i]-'0';
                }
            }
        }
        return ((lfCnt+ rtCnt) & 1) || ((lfSum - rtSum) << 1)  != (rtCnt-lfCnt)*9;
    }
};

// Comments
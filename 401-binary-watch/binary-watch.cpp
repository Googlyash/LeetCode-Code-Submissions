// POTD Feb'17, 2026
// Feb'18, 2026 02:38 am

class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        string s;

        vector<string> ans;
        for(int i=0; i<12; i++){
            int hrSet= __builtin_popcount(i);
            if(hrSet<= turnedOn){
                int remSet= turnedOn - hrSet;
                for(int j=0;j<60; j++){
                    int minSet= __builtin_popcount(j);
                    if(remSet== minSet){
                        string s;
                        int cur= j;
                        do{
                            s+= (cur%10 + '0');
                            cur/=10;
                        } while( cur > 0);
                        if(j<10){
                            s+='0';
                        }
                        s+=':';
                        
                        cur= i;
                        do{
                            s+= (cur%10 + '0');
                            cur/=10;
                        } while( cur > 0);
                        reverse(s.begin(), s.end());
                        ans.push_back(s);
                    }
                }
            }
        }
        return ans;
    }
};

// 17 min
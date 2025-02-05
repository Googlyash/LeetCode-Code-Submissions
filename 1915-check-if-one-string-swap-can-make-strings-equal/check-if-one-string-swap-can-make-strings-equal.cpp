// POTD Feb'5, 2025
// Feb'5, 2025 02:38 pm

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n= s1.size(), m= s2.size();

        if(n!=m){
            return false;
        }
        int k=-1, cnt=0;
        for(int i=0;i<n;i++){
            if(s1[i]!= s2[i]){
                cnt++;
                if(k== -1){
                    k=i;
                }
                else {
                    if(s1[k]!=s2[i] || s1[i]!=s2[k]){
                        return false;
                    }
                }
            }
        }

        return cnt==2 || cnt==0;
    }
};

// 4 min
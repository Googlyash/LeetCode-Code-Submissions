// POTD Jan'9, 2025
// Jan'9, ,2025 07:19 pm

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int m= pref.size(), ans=0;

        for(auto it:words){
            if(it.size()< m){
                continue;
            }
            int cur=1;
            for(int i=0;i<m;i++){
                if(pref[i]!= it[i]){
                    cur=0;
                    break;
                }
            }
            ans+=cur;
        }

        return ans;
    }
};

// 2 min
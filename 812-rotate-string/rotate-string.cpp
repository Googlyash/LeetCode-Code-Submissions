// POTD May'3, 2026
// Nov'4, 2026 12:45 am

class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();

        for(int i=0;i<n;i++){
            string temp;
            for(int j=i;j<n;j++){
                temp+=s[j];
            }
            for(int k=0;k<i;k++){
                temp+=s[k];
            }
            if(temp== goal){
                return true;
            }
        }

        return false;
    }
};

// 3 min
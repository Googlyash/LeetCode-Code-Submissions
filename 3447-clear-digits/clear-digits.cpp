// POTD Feb'10, 2025
// Feb'10, 2025 09:18 pm

class Solution {
public:
    string clearDigits(string s) {
        int n= s.size();
        string ans;

        for(int i=0;i<n;i++){
            if(s[i]>='0' && s[i]<='9' && !ans.empty()){
                ans.pop_back();
            }
            else if(s[i]>='a' && s[i]<='z'){
                ans+= s[i];
            }
        }

        return ans;
    }
};

// 3 min
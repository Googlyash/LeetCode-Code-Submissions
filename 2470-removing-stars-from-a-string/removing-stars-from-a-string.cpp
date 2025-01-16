// Jan'16, 2025 07:49 pm

class Solution {
public:
    string removeStars(string s) {
        int n=s.size();

        string ans;
        for(int i=0;i<n;i++){
            if(s[i]== '*'){
                ans.pop_back();
            }
            else {
                ans.push_back(s[i]);
            }
        }

        return ans;
    }
};

// 2 min
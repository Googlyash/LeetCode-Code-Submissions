// POTD Feb'18, 2025
// Feb'18, 2025 10:29 pm

class Solution {
public:
    string smallestNumber(string pattern) {
        string ans;
        int n= pattern.size()+1, j=0;
        for(int i=0;i<n;i++){
            ans+= (i+'1');
            if(i==n-1 || pattern[i]=='I'){
                reverse(ans.begin()+j, ans.end());
                j= i+1;
            }
        }
        return ans;
    }
};

// Comments
// 10 min
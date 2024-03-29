//Sliding Window
//Sep'27, 2023 04:16 pm

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int i=0, j=0, ans=0;
        unordered_map<char, int>mp;
        while(j<n){
            mp[s[j]]++;
            while(mp[s[j]]>1){
                mp[s[i]]--;
                i++;
            }
            ans=max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};

//03:28 min
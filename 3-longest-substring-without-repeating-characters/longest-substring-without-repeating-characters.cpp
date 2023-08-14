//Striver SDE Sheet: Day 4
//Aug'14, 2023 10:10 pm

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int n=s.size(), cnt=0, i, rev=0;
        for(i=0;i<n;i++)
        {
           if(mp[s[i]]>rev){
               rev=mp[s[i]];
           }
           mp[s[i]]=i+1;
           cnt=max(cnt, i-rev+1);
        }
        return cnt;
    }
};

//Partial
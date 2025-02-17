// POTD Feb'17, 2025
// Feb'17, 2025 09:30 pm

class Solution {
    int dfs(vector<int>&cnt){
        int sum=0;

        for(int i=0;i<26;i++){
            if(cnt[i]==0)continue;
            sum++;
            cnt[i]--;
            sum+= dfs(cnt);
            cnt[i]++;
        }

        return sum;
    }
public:
    int numTilePossibilities(string tiles) {
        vector<int>cnt(27, 0);
        for(auto c:tiles)cnt[c-'A']++;
        return dfs(cnt);
    }
};

// Comments
// 18 min
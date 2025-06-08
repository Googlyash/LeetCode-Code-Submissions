// POTD Jun'8, 2025
// Jun'8, 2025 08:15 pm

class Solution {
    void dfs(int cur, int n, vector<int>&ans){
        if(cur>n){
            return ;
        }

        ans.push_back(cur);
        for(int i=0;i<=9;i++){
            int nxt= cur*10+ i;
            if(nxt>n){
                return ;
            }
            dfs(nxt, n, ans);
        }

    }
public:
    vector<int> lexicalOrder(int n) {
        vector<int>ans;
        for(int i=1;i<10;i++){
            dfs(i, n, ans);
        }
        return ans;
    }
};

// 15 min
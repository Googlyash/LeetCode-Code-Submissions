// POTD Nov'11, 2025
// Nov'12, 2025 04:26 am

class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        int sz= strs.size();
        vector<pair<int, int>>v;
        for(auto s: strs){
            int zer= 0, one=0;
            for(auto c:s){
                (c=='0') ? zer++ : one++;
            }
            v.push_back({zer, one});
        }
        vector<vector<int>>cur(m+1, vector<int>(n+1, 0));
        vector<vector<int>>pre(m+1, vector<int>(n+1, 0));

        int ans= 0;
        for(int i=0;i<sz; i++){
            for(int j=0;j<=m;j++){
                for(int k=0;k<=n; k++){
                    if(v[i].first<=j && v[i].second<= k){
                        cur[j][k]= max(pre[j][k], 1+ pre[j-v[i].first][k-v[i].second]);
                        ans= max(cur[j][k], ans);
                    }
                }
            }
            pre= cur;
        }
        return ans;
        
    }
};

// 34 min
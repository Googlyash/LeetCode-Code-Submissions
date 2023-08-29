//Aug'29, 2023 11:16 am
//Comments
#define ll long long
class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(), m=matrix[0].size();
        ll ans=0;
        vector<vector<int>>pre(n, vector<int>(m));
        pre=matrix;
        for(int i=0;i<n;i++){
            for(int j=1;j<m;j++){
                pre[i][j]+=pre[i][j-1];
            }
        }
        unordered_map<int,int>mp;
        for(int i=0;i<m;i++){
            for(int j=i;j<m;j++){
                mp={{0,1}};
                int cur=0;
                for(int k=0;k<n;k++){
                    cur+=pre[k][j]- (i>0? pre[k][i-1]: 0);
                    ans+= mp.find(cur-target)!=mp.end() ? mp[cur-target]: 0;
                    mp[cur]++;
                }
            }
        }
        return ans;
    }
};
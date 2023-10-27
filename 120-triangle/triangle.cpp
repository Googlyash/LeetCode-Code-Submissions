//Oct'27, 2023 06:55 pm

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<int>cur(n+1, 0), pre(n+1, 0);
        for(int i=n-1;i>=0;i--){
            pre[i]=triangle[n-1][i];
        }
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                cur[j]=min(pre[j], pre[j+1])+triangle[i][j];
            }
            pre=cur;
        }
        return pre[0];
    }
};

//6 min
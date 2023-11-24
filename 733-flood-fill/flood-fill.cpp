//Nov'24, 2023 11:11 pm

class Solution {
    void dfs(vector<vector<int>>&image, int sr, int sc, int color){
        int n=image.size(), m= image[0].size();
        if(min(sr, sc)<0 || sr>=n || sc>=m || image[sr][sc]==color ){
            return ;
        }
        int col= image[sr][sc];
        image[sr][sc]=color;

        int d[5]={0, -1, 0, 1, 0};
        for(int i=0;i<4;i++){
            int r=sr+ d[i];
            int c=sc+ d[i+1];

            if(min(r,c)>=0 && r<n && c<m && image[r][c]==col){
                dfs(image, r, c, color);
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size(), m= image[0].size();
        vector<vector<int>>ans=image;
        dfs(ans, sr, sc, color);
        return ans;
        
    }
};

//10 mins
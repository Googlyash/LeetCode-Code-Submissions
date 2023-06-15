class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        int n=a.size();
        int m=a[0].size();

        bool firstRow=0,firstCol=0;
        for(int i=0;i<n;i++){
            if(a[i][0]==0){
                firstCol=true;
                break;
            }
        }

        for(int i=0;i<m;i++){
            if(a[0][i]==0){
                firstRow=true;
                break;
            }
        }

        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(!a[i][j]){
                    a[i][0]=0;
                    a[0][j]=0;
                }
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(!a[i][0] || !a[0][j])a[i][j]=0;
            }
        }

        if(firstCol){
            for(int i=0;i<n;i++)a[i][0]=0;
        }

        if(firstRow){
            for(int i=0;i<m;i++)a[0][i]=0;
        }
    }
};
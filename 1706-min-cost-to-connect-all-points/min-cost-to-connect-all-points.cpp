//POTD Sep'15, 2023 
//Sep'15, 2023 06:26 pm
//Comments: Prism's Algo
class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int ans=0, n=points.size(), connected=0, i=0;

        vector<int>mn(n, 1e7);
        while(++connected<n){
            mn[i]=INT_MAX;
            int mnj=i;
            for(int j=0; j<n; j++){
                if(mn[j]!=INT_MAX){
                    mn[j]= min(mn[j], abs(points[i][0]-points[j][0])+ abs(points[i][1]-points[j][1]));
                    mnj= mn[j]< mn[mnj]? j: mnj;
                }
            }
            ans+=mn[mnj];
            i=mnj;
        }
        return ans;
    }
};

//Comments: 50 Min
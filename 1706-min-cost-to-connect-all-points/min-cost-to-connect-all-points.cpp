//POTD Sep'15, 2023 
//Sep'15, 2023 06:26 pm
//Comments
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
        // map<pair<pair<int, int>, pair<int, int>>, int>mp;
        // for(int i=0;i<n;i++){
        //     int mn=1e8;
        //     int x1=points[i][0], y1=points[i][1];
        //     pair<pair<int, int>, pair<int, int>>p= {{0,0}, {0,0}};
        //     for(int j=0; j<n;j++){
        //         if(j==i)continue;
        //         int x2=points[j][0], y2=points[j][1];
        //         if(mn> abs(x1-x2)+ abs(y1-y2)){
        //             if((x1+y1> x2+y2) ){
        //                 if(mn<1e8)mp[p]--;
        //                 mp[{{x1,y1}, {x2,y2}}]++;
        //                 mp[{{x2,y2}, {x1, y1}}]++;
        //                 p={{x1,y1}, {x2,y2}};
        //                 mn= abs(x1-x2)+ abs(y1-y2);
        //             }
        //         }
        //     }
        //     cout<<mn<<endl;
        //     cout<<mp[p]<<endl;
        //     cout<<p.first.first<<" "<<p.first.second<<" "<<p.second.first<<" "<<p.second.second<<endl;
        //     cout<<endl;
        //     if(mn<1e8 && (mp[p]<2))ans+=mn;
        // }
        return ans;
    }
};
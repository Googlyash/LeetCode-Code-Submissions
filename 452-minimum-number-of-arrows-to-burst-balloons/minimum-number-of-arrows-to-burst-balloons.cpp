//POTD Mar'18, 2024
//Mar'18, 2024 08:46 pm

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size();
        int ans=0, mx=INT_MIN;

        sort(points.begin(), points.end());
        for(int i=0;i<n;i++){
            if(points[i][0]<=mx){
                mx= min(mx, points[i][1]);
            }
            else {
                ans++, mx=points[i][1];
            }
        }
        return ans+ !ans;
    }
};

//41 min
//Comments
//4 WA: [[-2147483648,2147483647]]
//3 WA: [[77171087,133597895],[45117276,135064454],[80695788,90089372],[91705403,110208054],[52392754,127005153],[53999932,118094992],[11549676,55543044],[43947739,128157751],[55636226,105334812],[69348094,125645633]]
//2 WA: [[-1,1],[0,1],[2,3],[1,2]]
//1 WA: [[1,2], [1,2]]
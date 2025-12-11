// POTD Dec'11, 2025
// Dec'12, 2025 01:43 am

class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        int ans=0;
        map<int, vector<int>>hor, ver;
        for(auto it: buildings){
            int x= it[0], y= it[1];
            hor[x].push_back(y);
            ver[y].push_back(x);
        }

        for(auto &it:hor){
            sort(it.second.begin(), it.second.end());
        }
        for(auto &it:ver){
            sort(it.second.begin(), it.second.end());
        }

        for(auto it: buildings){
            int x= it[0], y= it[1];
            // cout<<hor[x][0]<<" "<<hor[x][hor[x].size()-1]<<" "<<ver[y][0]<<" "<<ver[y][ver[y].size()-1]<<endl;
            if(hor[x][0]< y && hor[x][hor[x].size()-1]>y && ver[y][0]<x && ver[y][ver[y].size()-1]>x){
                ans++;
            }
        }
        return ans;
    }
};

// 34 min
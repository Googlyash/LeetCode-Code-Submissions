//Nov'23, 2023 07:03 pm

class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        int n=people.size();
        sort(people.begin(), people.end(), [](vector<int>v1, vector<int>v2){
            return v1[0]> v2[0] || (v1[0]==v2[0] && v1[1]< v2[1]);
        });

        vector<vector<int>>ans;
        for(auto it:people){
            ans.insert(ans.begin()+ it[1], it);
        }
        return ans;
    }
};

//Solving for media.net 2022 interview question 34 min
//Couldn't solve, comments
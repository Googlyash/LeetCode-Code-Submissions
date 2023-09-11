//POTD Sep'11, 2023 
//Sep'11, 2023 04:43 pm
//Earlier Self-Done

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n=groupSizes.size();
        unordered_map<int, vector<int>>mp;
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            int size= groupSizes[i];
            mp[size].push_back(i);

            if(mp[size].size()==size){
                ans.push_back(mp[size]);
                mp[size].clear();
            }
        }
        return ans;

        // vector<vector<int>>ans;
        // vector<pair<int, int>>sortedSizes;
        // for(int i=0;i<n;i++){
        //     sortedSizes.push_back({ groupSizes[i], i});
        // }
        // sort(sortedSizes.begin(), sortedSizes.end());
        // for(int i=0;i<n;){
        //     vector<int>v(sortedSizes[i].first, 0);
        //     for(int j=0;j<v.size(); j++){
        //         v[j]=sortedSizes[i++].second;
        //         cout<<v[j]<<" ";
        //     }
        //     cout<<endl;
        //     ans.push_back(v);
        // }
        // return ans;
    }
};
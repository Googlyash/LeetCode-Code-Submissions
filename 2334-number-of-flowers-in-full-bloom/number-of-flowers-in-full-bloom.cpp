//POTD Oct'11, 2023
//Oct'11, 2023 03:04 pm
//Earlier Solvwed Using Difference Array
//Comments: Binary search
class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        int n=flowers.size(), m=people.size();

        vector<int>strt, end;
        for(auto it:flowers){
            strt.push_back(it[0]);
            end.push_back(it[1]);
        }
        sort(strt.begin(), strt.end());
        sort(end.begin(), end.end());

        vector<int>ans;
        for(auto it:people){
            int r=upper_bound(strt.begin(), strt.end(), it)-strt.begin();
            int l=lower_bound(end.begin(), end.end(), it)-end.begin();
            ans.push_back(r-l);
        }
        return ans;
    }
};
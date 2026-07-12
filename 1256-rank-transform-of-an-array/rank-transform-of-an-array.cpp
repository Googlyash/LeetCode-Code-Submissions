// POTD Jul' 12, 2026
// Jul'12, 2026 11:22 am

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n= arr.size();
        vector<int>ans(n);
        set<int>temp;
        map<int, int>mp;
        for(int i=0;i<n;i++){
            temp.insert(arr[i]);
        }
        int rank=1;
        for(auto it: temp){
            mp[it]= rank++;
        }
        for(int i=0;i<n;i++){
            ans[i]= mp[arr[i]];
        }
        return ans;
    }
};

// 5 min
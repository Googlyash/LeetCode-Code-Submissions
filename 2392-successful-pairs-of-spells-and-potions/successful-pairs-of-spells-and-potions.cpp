// POTD Oct'8, 2025
// Oct'9, 2025 01:02 am

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n= spells.size(), m=potions.size();
        vector<pair<int, int>> v;
        for(int i=0;i<n; i++){
            v.push_back({spells[i], i});
        }
        sort(v.begin(), v.end());
        sort(potions.begin(), potions.end());
        vector<int>temp(n, n-1), ans(n, 0);
        int l=0, r=m-1;
        for(int i=0;i<n;i++){
            while(r>=0 && (v[i].first)*1LL*(potions[r]) >= success){
                r--;
            }
            ans[v[i].second]= m-1-r; 
        }
        return ans;
    }
};

// 11 min
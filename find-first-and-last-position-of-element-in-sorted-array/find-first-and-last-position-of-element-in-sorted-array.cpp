class Solution {
public:
    vector<int> searchRange(vector<int>& a, int k) {
        auto it= lower_bound(a.begin(),a.end(),k)-a.begin();
        auto it1=upper_bound(a.begin(),a.end(),k)-a.begin();
        if(it==a.size() || a[it]!=k)return {-1,-1};
        return {(int)it,(int)it1-1};
    }
};
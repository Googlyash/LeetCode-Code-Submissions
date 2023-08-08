//Striver SDE Sheet
//Kadene Algo
//Aug'9, 2023 01:02 am

class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int n=a.size();
        int mx=a[0], cur=a[0];
        for(int i=1;i<n;i++){
            cur=max(a[i], cur+a[i]);
            mx=max(cur, mx);
        }
        return mx;
    }
};
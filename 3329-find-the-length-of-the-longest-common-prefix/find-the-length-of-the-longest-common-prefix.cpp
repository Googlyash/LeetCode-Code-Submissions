// POTD May'21, 2026
// May'22, 2026 12:51 am

class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int n= arr1.size(), m= arr2.size(), ans=0;

        map<int, int>mp1, mp2;
        for(auto x: arr1){
            for(int i=1e8;i>0;i/=10){
                int cur= x/i;
                if(cur!=0){
                    mp1[cur]++;
                }
            }
        }
        for(auto x: arr2){
            int cnt=0;
            for(int i=1e8;i>0;i/=10){
                int cur= x/i;
                if(cur!=0){
                    cnt++;
                    mp2[cur]++;
                    if(mp1.count(cur)!=0){
                        ans= max(ans, cnt);
                    }
                }
            }
        }
        return ans;
    }
};

// 8 min
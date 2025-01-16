// Jan'16, 2025 01:32 pm

class Solution {
public:
    int uniquePaths(int m, int n) {
        long long ans=1;
        int tot= n+m-2, mod=1e9+7;
        if(n<m)swap(n,m);
        for(int i=1;i<m;i++){
            ans*= (tot--);
            ans/=i;
        }

        return ans;
    }
};


// 7 min
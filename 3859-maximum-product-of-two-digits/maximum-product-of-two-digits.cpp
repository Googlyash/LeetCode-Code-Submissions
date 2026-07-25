// POTD Jul'25, 2026
// Jul'25, 2026 11:51 pm

class Solution {
public:
    int maxProduct(int n) {
        vector<int>dig;
        while(n){
            dig.push_back(n%10);
            n/=10;
        }
        int ans=0;
        int m= dig.size();
        for(int i=0;i<m;i++){
            for(int j=i+1;j<m;j++){
                ans= max(ans, dig[i]*dig[j]);
            }
        }
        return ans;
    }
};

// 3 min
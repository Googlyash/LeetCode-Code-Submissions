// POTD Dec'10, 2025
// Dec'11, 2025 12:23 am

class Solution {
public:
    int countPermutations(vector<int>& complexity) {
        int n= complexity.size();
        long ans=1, mod= 1e9+7;
        for(int i=1 ;i<n;i++){
            if(complexity[i]<= complexity[0]){
                return 0;
            }
        }

        for(int i=1;i<n;i++){
            ans*=i;
            ans%=mod;
        }
        return ans%mod;
    }
};

// 9 min
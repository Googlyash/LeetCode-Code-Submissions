// POTD Feb'21, 2026
// Feb'21, 2026 09:04 pm

class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int ans=0;

        map<int, int>mp;
        mp[2]++;
        mp[3]++;
        mp[5]++;
        mp[7]++;
        mp[11]++;
        mp[13]++;
        mp[17]++;
        mp[19]++;
        for(int i=left; i<= right; i++){
            int cur= __builtin_popcount(i);

            if(mp[cur]){
                ans++;
            }
        }
        return ans;
    }
};

// 5 min
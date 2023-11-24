//POTD Nov'24, 2023
//Nov'24, 2023 07:24 pm

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n=piles.size(), ans=0;
        sort(piles.begin(), piles.end());
        for(int i=n-2;i>=n/3;i-=2){
            ans+=piles[i];
        }
        for(auto it:piles){
            cout<<it<<" ";
        }
        return ans;
    }
};
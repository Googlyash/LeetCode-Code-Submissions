class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end(),greater<int>());
        int count=0,ans=0;
        int i=1;
        while(count<piles.size()/3){
            ans+=piles[i];
            i+=2;
            count++;
        }
        return ans;
    }
};
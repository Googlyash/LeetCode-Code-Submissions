//Sep'16, 2023 03:33 pm
//Self: 6Min

#define ll long long
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        ll sum=0;
        for(auto it:piles){
            sum+=it;
        }
        ll l=1, r=1e9;
        while(l<=r){
            ll mid= l+(r-l)/2;
            ll k=0;
            for(auto it:piles){
                k+=it/mid;
                if(it%mid>0)k++;
            }
            if(k<=h){
                r=mid-1;
            }
            else {
                l=mid+1;
            }
        }
        return l;
    }
};

//[332484035,524908576,855865114,632922376,222257295,690155293,112677673,679580077,337406589,290818316,877337160,901728858,679284947,688210097,692137887,718203285,629455728,941802184]
//h= 823855818
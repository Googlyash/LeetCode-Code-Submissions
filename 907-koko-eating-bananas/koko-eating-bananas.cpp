// Jan'16, 2025 05:06 pm

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n= piles.size();

        int l= 1, r= 1e9;

        while(l<r){
            int mid= l+ (r-l)/2;

            int cnt=0;
            for(auto it:piles){
                cnt+= it/mid;
                if(it%mid!=0){
                    cnt++;
                }
            }

            if(cnt<=h){
                r= mid;
            }
            else {
                l=mid+1;
            }
        }

        return l;
    }
};

// 8 min
// Jan'23, 2025 05:31 pm

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n= timeSeries.size(), ans=0;
        int l=timeSeries[0], r=timeSeries[0]+duration-1;

        for(int i=1;i<n;i++){
            if(timeSeries[i]<=r){
                r= timeSeries[i]+ duration-1;
            }
            else {
                ans+= r-l+1;
                l= timeSeries[i];
                r= l+ duration-1;
            }
        }
        ans+= r-l+1;

        return ans;
    }
};

// 5 min
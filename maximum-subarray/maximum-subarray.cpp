//Kadane's Algo
//Comments
//Not self solved yet

class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int i,n=a.size(),sum=INT_MIN,mx=0;
        for(i=0;i<n;i++){
            mx=mx+a[i];
            sum=max(mx,sum);
            if(mx<0)mx=0;
        }
        return sum;
    }
};
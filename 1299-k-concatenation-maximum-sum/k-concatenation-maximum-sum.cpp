//Sept'1, 2023 09:41 pm

class Solution {
public:
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        int n=arr.size(), mod=1e9+7;
        long long sum=0, ans=INT_MIN;
        for(auto it:arr){
            sum+=it;
        }
        if(k==1){
            long long cur=0;
            for(int  i=0;i<n;i++){
                cur+=arr[i];
                ans=max(ans, cur);
                cur=max(cur, 0LL);
            }
            return max(0LL, max(sum%mod ,ans%mod));
        }
        vector<int>v(n*2, 0);
        for(int i=0;i<n;i++){
            v[i]=arr[i];
            v[i+n]=arr[i];
        }
        long long cur=0;
        for(int  i=0;i<2*n;i++){
            cur+=v[i];
            ans=max(ans, cur);
            cur=max(cur, 0LL);
        }
        if(sum>0)return max(0LL, max( sum*k, ans+sum*(k-2)))%mod;
        else return max(0LL, ans)%mod;
    }
};
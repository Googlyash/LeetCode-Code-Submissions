//Weekly Contest 364 24'Sep, 2023


class Solution {
private:
    long long solve(vector<int>&mxh, int idx){
        if(idx>0){
            if(mxh[idx]<mxh[idx-1])return 0LL;
        }
        if(idx<mxh.size()-1){
            if(mxh[idx]<mxh[idx+1])return 0LL;
        }
        long long ans=0, mx=mxh[idx];
        long long l=0,r=0, n=mxh.size();
        if(idx>0)l=mxh[idx-1];
        if(idx<n-1)r=mxh[idx+1];
        
        for(int i=idx-1;i>=0; i--){
            if(l>mxh[i])l=mxh[i];
            if(idx>0)ans+=l;
        }
        ans+=mx;
        for(int i=idx+1; i<n;i++){
            if(r>mxh[i])r=mxh[i];
            if(idx<n-1)ans+=r;
        }
        return ans;
    }
public:
    long long maximumSumOfHeights(vector<int>& mxh) {
        int mx=0;
        int n=mxh.size(), idx=0;
        long long ans=0;
        vector<int>h;
        for(int i=0;i<n;i++){
            mx=max(mx, mxh[i]);
            long long cur=solve(mxh, i);
            
            if(ans<cur){
                ans=cur;
                cout<<i;
            }
            // ans=max(ans, solve(mxh, i));
        }
        for(int i=0;i<n;i++){
            if(mxh[i]==mx){
                
            }
        }
        cout<<endl;
        return ans;
    }
};
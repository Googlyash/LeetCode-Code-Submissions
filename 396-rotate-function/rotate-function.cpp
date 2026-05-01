// POTD May'1, 2026
// May'1, 2026 10:47 pm

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n= nums.size();
        vector<int>pre(n+1, 0), suf(n+1, 0);

        for(int i=0;i<n;i++){
            pre[i+1] = pre[i]+ nums[i];
            suf[n-1-i] = suf[n-i] + nums[n-1-i];
        }

        int cur=0;
        for(int i=0;i<n;i++){
            cur+= (i * nums[i]);
        }

        int ans= cur;
        cout<<cur<<endl;
        for(int i=n-1;i>0;i--){
            cur-= nums[i]*(n);
            cur+= pre[i];
            cur+= suf[i];
            cout<<cur<<endl;
            ans= max(ans, cur);
        }
        return ans;
    }
};

// 15 min
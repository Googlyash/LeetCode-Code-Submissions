// Jan'16, 2025 07:07 pm

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans= INT_MIN, cur=0;
        int n= nums.size(), l=0, r=k;
        for(int i=0;i<k;i++){
            cur+= nums[i];
        }
        cur/=k;
        ans= max(ans, cur);
        while(r<n){
            cur*=k;
            cur+= nums[r++];
            cur-= nums[l++];

            cur/=k;
            ans=max(ans, cur);
        }
        return ans;
    }
};

// 4 min
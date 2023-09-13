//Striver SDE: Day7 Arrays
//Sep'14, 2023 12:02 pm

class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>pre(n+1, 0), suf(n+1, 0);
        int ans=0;
        for(int i=0;i<n;i++){
            pre[i+1]=max(pre[i], height[i]);
            suf[n-1-i]=max(suf[n-i], height[n-1-i]);
        }
        for(int i=1;i<n-1;i++){
            int stored=min(pre[i], suf[i])- height[i];
            if(stored>=0){
                ans+=stored;
            }
        }
        return ans;
    }
};

//Self: 24 Min
//Optimised Code
//Inspiration from container with max water question...
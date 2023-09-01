//Sep'1, 2023 10:33 pm
//Greedy

class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int ans=0, curend=0, curfarthest=0;
        for(int i=0;i<n-1;i++){
            curfarthest=max(curfarthest, i+nums[i]);
            if(i==curend){
                curend=curfarthest;
                ans++;
            }
        }
        return ans;
    }
};
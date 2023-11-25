//POTD Nov'25, 2023
//Nov'25, 2023 09: pm

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size(), sum=0;
        vector<int>ans, pre(n+1, 0);
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+nums[i];
        }
        sum= pre[n];
        for(int i=0;i<n;i++){
            int it= i*nums[i]-2*pre[i]+ sum- (n-i)*nums[i];
            ans.push_back(it);
        }
        return ans;
    }
};

//15mins - silly mistake
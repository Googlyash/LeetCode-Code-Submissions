//POTD Nov'25, 2023
//Nov'25, 2023 09:52 am

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size(), sum=0;
        vector<int>ans;
        for(int i=0;i<n;i++){
            sum+= (nums[i]-nums[0]);
        }
        ans.push_back(sum);
        for(int i=1;i<n;i++){
            sum+= i*(nums[i]-nums[i-1])- (n-i)*(nums[i]-nums[i-1]);
            ans.push_back(sum);
        }
        return ans;
    }
};

//15mins - silly mistake
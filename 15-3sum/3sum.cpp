//Striver SDE: Day7 Arrays
//Sep'13, 2023 11:27 pm

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();        
        vector<vector<int>>ans;
        int cur=INT_MIN;
        for(int i=0;i<n-2; i++){
            if(nums[i]==cur)continue;
            cur=nums[i];
            int j=i+1, k=n-1;
            while(j<k){
                int aj=nums[j];
                int ak=nums[k];
                if(cur+ nums[j]+ nums[k]>0){
                    k--;
                }
                else if(cur+nums[j]+ nums[k]<0){
                    j++;
                }
                else {
                    ans.push_back({cur, nums[j], nums[k]});
                    // break;
                    while(j<k && nums[j]==aj)j++;
                    while(j<k && nums[k]==ak)k--;
                }
            }
        }
        return ans;
    }
};
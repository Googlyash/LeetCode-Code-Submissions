//Striver SDE: Day7 Arrays
//Sep'13, 2023 11:27 pm

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        set<vector<int>>st;
        for(int i=0;i<n-2; i++){
            int cur=nums[i];
            int j=i+1, k=n-1;
            while(j<k){
                if(cur+ nums[j]+ nums[k]>0){
                    k--;
                }
                else if(cur+nums[j]+ nums[k]<0){
                    j++;
                }
                else {
                    st.insert({cur, nums[j], nums[k]});
                    // break;
                    j++, k--;
                }
            }
        }
        vector<vector<int>>ans(st.begin(), st.end());
        return ans;
    }
};
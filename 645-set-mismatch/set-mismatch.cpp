//POTD Jan'22, 2024
//Jan'23, 2024 12:36 am

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int i, j=0, k=-1,n=nums.size();
        sort(nums.begin(), nums.end());
        vector<int>ans;
        map<int, int>mp;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                k=nums[i];
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]==1+j){
                j=nums[i];
            }
        }
        ans.push_back(k);
        ans.push_back(j+1);

        return ans;
    }
};

//9 mins
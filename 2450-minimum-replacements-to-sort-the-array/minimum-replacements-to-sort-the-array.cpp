//POTD Aug'30, 2023 
//Aug'30 2023 10:49 pm
//Comments

#define ll long long
class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        int n=nums.size();
        ll ans=0;

        for(int i=n-2;i>=0; i--){
            if(nums[i]<=nums[i+1]){
                continue;
            }
            ll curr=  (nums[i]+nums[i+1]-1)/nums[i+1];
            ans+=curr-1;
            nums[i]= nums[i]/curr;
        }
        return ans;
    }
};


//Weaker solution may break at [12,9,7,6,17,19,21]
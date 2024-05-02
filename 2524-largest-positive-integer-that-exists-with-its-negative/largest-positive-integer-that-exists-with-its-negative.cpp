//POTD May'2, 2024
//May'2, 2024 06:43 pm

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n=nums.size(), mn=-1;

        map<int, int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto it:nums){
            if(it<0 && mp[-it]>0){
                mn=max(mn, -it);
            }
        }
        return mn;
    }
};

//2 min
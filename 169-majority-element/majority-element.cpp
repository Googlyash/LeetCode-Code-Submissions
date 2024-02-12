//POTD Feb'12, 2023
//Feb'12, 2023 11:18 pm

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        map<int, int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto it:mp){
            if(it.second> n/2){
                return it.first;
            }
        }
        return -1;
    }
};

//1 min
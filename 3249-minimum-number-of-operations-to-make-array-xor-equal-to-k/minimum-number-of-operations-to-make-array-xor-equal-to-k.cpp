//POTD Apr'29, 2024
//Apr'29, 2024 10:46 pm

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size(), ans=0;

        map<int, int>mp;
        for(auto x: nums){
            for(int i=0;i<32 && n;i++){
                mp[i]+=x%2;
                x/=2;
            }
        }

        int cur=k;
        for(int i=0;i<32; i++){
            if(mp[i]%2!= cur%2){
                ans++;
            }
            cur/=2;
        }
        return ans;
    }
};

//10 min
//POTD Mar'16, 2024
//Mar'16, 2024 08:47 pm

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size(), mx=0, ln=0, cur=0;
        map<int, int>mp;
        mp[0]=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                cur++;
            }
            else {
                cur--;
            }
            if(mp.find(cur)!=mp.end()){
                mx=max(mx, i-mp[cur]);
            }
            else {
                mp[cur]=i;
            }
        }
        return mx;
    }
};

//7 min
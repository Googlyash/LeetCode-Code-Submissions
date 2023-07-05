//POTD July'5, 2023

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size(), k=0, l=0;
        vector<int>v;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                k++;
            }
            else {
                v.push_back(k);
                k=0;
            }
        }
        v.push_back(k);
        if(v.size()==0){
            return 0;
        }
        if(v.size()==1){
            return v[0]-1;
        }
        k=0;
        for(int i=0;i<v.size()-1; i++){
            k=max(k ,v[i]+v[i+1]);

        }
        return k;
    }
};
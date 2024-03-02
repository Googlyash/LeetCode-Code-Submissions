//POTD Mar'2, 2024
//Mar'2, 2024 3:41 pm
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size(),mn=1e9,idx=-1, l=0, r=0, ind=0;
        vector<int>v(n,0);
        for(auto it:nums){
            mn=min(mn, abs(it));
        }
        for(int i=0;i<n;i++){
            if(abs(nums[i])==mn){
                idx=i;
                break;
            }
        }
        v[0]=nums[idx]*nums[idx];
        l=idx-1, r=idx+1;
        ind=1;
        while(l>=0 && r<n){
            if( abs(nums[l])>= abs(nums[r])){
                v[ind++]=(nums[r]* nums[r]);
                r++;
            }
            else {
                v[ind++]= (nums[l]* nums[l]);
                l--;
            }
        }
        while(l>=0){
            v[ind++]= (nums[l]* nums[l]);
            l--;
        }
        while(r<n){
            v[ind++]=(nums[r]* nums[r]);
            r++;
        }
        return v;
    }
};

// 10 min
//POTD Feb'14, 2024
//Feb'14, 2024 10:41 pm

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>p,o;
        // int p=0, o=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                p.push_back(nums[i]);
            }
            else {
                o.push_back(nums[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(i%2){
                nums[i]=o[i/2];
            }
            else {
                nums[i]= p[i/2];
            }
        }
        return nums;
    }
};

//13 min
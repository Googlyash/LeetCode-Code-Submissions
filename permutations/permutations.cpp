//Striver:Recursion
//June'30,2023
class Solution {
private:
    void allPermute(int freq[], vector<int>&ds, vector<vector<int> >&v, vector<int>&nums){
        if(ds.size()==nums.size()){
            v.push_back(ds);
            return;
        }

        for(int i=0;i<nums.size();i++){
            if(freq[i]!=1){
                ds.push_back(nums[i]);
                freq[i]=1;
                allPermute(freq,ds,v,nums);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> v;
        vector<int>ds;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++)freq[i]=0;
        allPermute(freq,ds,v,nums);
        return v;
    }
};
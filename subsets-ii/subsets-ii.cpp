class Solution {
  
public:
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        subsss(0,nums,ds,v);
        return v;
    }
private:   
    void subsss(int idx, vector<int>&a, vector<int>&ds, vector<vector<int>>&v){
        v.push_back(ds);

        for(int i=idx;i<a.size();i++){
            if(i>idx && a[i]==a[i-1])continue;

            ds.push_back(a[i]);
            subsss(i+1,a,ds,v);
            ds.pop_back();
        }
    }
};
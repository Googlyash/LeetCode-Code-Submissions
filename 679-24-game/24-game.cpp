// POTD Aug'18, 2025
// Aug'18, 2025 10:59 pm

class Solution {
    vector<double> compute(double a, double b){
        double lim= 1e-6;
        vector<double> cur;

        cur.push_back(a+b);
        cur.push_back(a-b);
        cur.push_back(a*b);
        cur.push_back(a/b);
        if(fabs(a)> lim)cur.push_back(b-a);
        if(fabs(b)> lim)cur.push_back(b/a);

        return cur;
    }
    bool dfs(vector<double>&nums){
        int n= nums.size();
        double lim= 1e-6;

        if(n==1){
            return fabs(nums[0]- 24)< lim;
        }

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                double a= nums[i], b= nums[j];

                vector<double>cur;
                for(int k=0; k<n; k++){
                    if(k!=j && k!=i){
                        cur.push_back(nums[k]);
                    }
                }

                for(auto it: compute(a, b)){
                    cur.push_back(it);
                    if(dfs(cur)){
                        return true;
                    }
                    cur.pop_back();
                }
            }
        }

        return false;
    }
public:
    bool judgePoint24(vector<int>& cards) {
        vector<double> nums;
        for(auto it:cards){
            nums.push_back(it);
        }
        
        return dfs(nums);
    }
};

// Comments
// 44 min
// POTD Jun'8, 2026
// Jun'9, 2026 12:52 am

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n= nums.size();

        vector<int>pre, eq, aft;
        for(auto it: nums){
            if(it<pivot){
                pre.push_back(it);
            }
            else if(it == pivot){
                eq.push_back(it);
            }
            else {
                aft.push_back(it);
            }
        }
        vector<int>ans;
        for(auto it:pre){
            ans.push_back(it);
        }
        for(auto it:eq){
            ans.push_back(it);
        }
        for(auto it:aft){
            ans.push_back(it);
        }
        return ans;
    }
};

// 3 min
// POTD Jul'31, 2025
// Aug'1, 2025 12:00 am

class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        int n= arr.size();
        unordered_set<int>cur;
        unordered_set<int>res;

        for(auto it:arr){
            unordered_set<int>next;
            next.insert(it);

            for(int x: cur){
                next.insert(x | it);
            }
            res.insert(next.begin(), next.end());
            cur= next;
        }

        return res.size();
    }
};

// Comments
// 23 min
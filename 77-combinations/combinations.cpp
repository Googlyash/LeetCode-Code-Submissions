//POTD Aug'1,2023

class Solution {
private:
    void f(int n, int k, vector<int>&v, vector<vector<int>>& a){
        if(v.size()==k){
            a.push_back(v);
            return;
        }
        if(n==0){
            return;
        }

        f(n-1,k,v,a);
        v.push_back(n);
        f(n-1,k,v,a);
        v.pop_back();
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>a;
        vector<int>v;
        f(n,k,v, a);
        return a;
    }
};

//Self
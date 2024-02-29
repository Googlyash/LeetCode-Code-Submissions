//POTD Feb'29, 2024
//Feb'29, 2024 09:31 pm
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    void solve(TreeNode* root, int pol, vector<vector<int>>&v){
        if(!root){
            return ;
        }
        if(v.size()==pol){
            vector<int>vv;
            v.push_back(vv);
        }
        v[pol].push_back(root->val);
        solve(root->left, pol+1, v);
        solve(root->right, pol+1, v);
    }
public:
    bool isEvenOddTree(TreeNode* root) {
        vector<vector<int>>v;
        solve(root, 0, v);
        for(int i=0;i<v.size();i++){
            if(i%2){
                for(auto it:v[i]){
                    if(it%2){
                        return false;
                    }
                }
                for(int j=0;j<v[i].size()-1;j++){
                    if(v[i][j]<=v[i][j+1]){
                        return false;
                    }
                }
            }
            else {
                for(auto it:v[i]){
                    if(it%2==0){
                        return false;
                    }
                }
                for(int j=0;j<v[i].size()-1;j++){
                    if(v[i][j]>=v[i][j+1] ){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};

//13 min
//1 incorrect
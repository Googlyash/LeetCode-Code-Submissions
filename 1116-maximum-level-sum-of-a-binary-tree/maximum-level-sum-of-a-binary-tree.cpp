// Jan'22, 2025 10:34 am

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
    void dfs(int lvl, vector<int>&ans, TreeNode* root){
        if(!root){
            return ;
        }
        if(ans.size()==lvl){
            ans.push_back(root->val);
        }
        else {
            ans[lvl]+= root->val;
        }

        dfs(lvl+1, ans, root->left);
        dfs(lvl+1, ans, root->right);
    }
public:
    int maxLevelSum(TreeNode* root) {
        vector<int>ans;
        dfs(0, ans, root);
        int mx= INT_MIN, idx=0;
        for(int i=0;i<ans.size(); i++){
            if(mx<ans[i]){
                idx= i, mx= ans[i];
            }
        }

        return idx+1;
    }
};

// 7 min
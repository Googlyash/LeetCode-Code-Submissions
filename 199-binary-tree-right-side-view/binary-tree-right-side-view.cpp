// Jan'24, 2025 10:20 am

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
    void dfs(TreeNode* root, vector<int>&ans, int n){
        if(!root){
            return ;
        }

        if(ans.size()==n){
            ans.push_back(root->val);
        }
        dfs(root->right, ans, n+1);
        dfs(root->left, ans, n+1);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        dfs(root, ans, 0);
        return ans;
    }
};

// 6 min
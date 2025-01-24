// Jan'24, 2025 09:40 am

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
    void dfs(TreeNode* root, int l, int r, int& ans){
        if(!root){
            return;
        }
        ans= max({ans, l, r});
        dfs(root->left, r+1, 0, ans);
        dfs(root->right, 0, l+1, ans);
    }
public:
    int longestZigZag(TreeNode* root) {
        int ans=0;
        dfs(root, 0, 0, ans);
        return ans;
    }
};

// 7 min
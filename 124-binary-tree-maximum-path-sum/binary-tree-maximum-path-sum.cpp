//Oct'27, 2023 08:23 pm

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
    int ans=INT_MIN;
int dfs(TreeNode*node){
    if(!node){
        return 0;
    }

    int l=dfs(node->left);
    int r=dfs(node->right);

    ans=max({ans, l+r+node->val, node->val, l+node->val, r+node->val});
    return max({ node->val, l+node->val, r+node->val});
}
public:
    int maxPathSum(TreeNode* root) {

        dfs(root);
        return ans;
    }
};
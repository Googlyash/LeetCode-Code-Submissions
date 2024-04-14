//POTD Apr'14, 2024
//Apr'15, 2024 12:21 am

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
    int solve(TreeNode* root, int chk){
        if(!root){
            return 0;
        }

        if(!chk && !root->left && !root->right){
            return root->val+ solve(root->left, 0)+ solve(root->right, 1);
        }
        else {
            return solve(root->left, 0)+ solve(root->right, 1);
        }
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int ans=0;

        return solve(root, 1);
    }
};

//10 min

//1 wrong: ignored leaves, took all left nodes
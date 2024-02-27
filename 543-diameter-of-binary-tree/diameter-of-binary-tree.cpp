//POTD Feb'27, 202
//Feb'27, 2024 10:26 pm

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
    int mx=0;
    int solve(TreeNode* root, int cur){
        if(root== NULL){
            return 0;
        }
        int l=solve(root->left, cur+1), r=solve(root->right, cur+1);
        mx=max({mx, l+r+1});
        // cout<<root->val<<" "<<mx<<"\n";
        return 1+max({l, r});
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root){
            return 0;
        }
        solve(root, 0);
        return mx-1;
    }
};

//15 min
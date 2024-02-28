//POTD Feb'28, 2024
//Feb'28, 2024 07:24pm
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
    int mx=0, ans=-1, lidx;
    int solve(TreeNode* root, int dpth, int idx){
        if(!root){
            return 1;
        }

        int r=solve(root->right, dpth+1, idx+1), l=solve(root->left, dpth+1, idx-1);
        if(root->left && !(root->left->left || root->left->right) ){
            if(mx<=dpth ){
                mx=dpth, ans=root->left->val;
            }
        }
        else if(!root->left && root->right && !(root->right->left || root->right->right)){
            if(mx<=dpth ){
                mx=dpth, ans=root->right->val;
            }
        }
        return 0;
    }
public:
    int findBottomLeftValue(TreeNode* root) {
        ans=root->val;
        solve(root, 0, 0);
        return ans;
    }
};

//13 min
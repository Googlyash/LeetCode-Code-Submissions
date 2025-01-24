// Jan'24, 2025 09:09 am

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    TreeNode*ans;
    int solve(TreeNode* root, TreeNode*p, TreeNode*q){
        if(!root){
            return 0;
        }
        int cur=0;
        if(root== p || root==q){
            cur= 1;
        }

        int l= solve(root->left, p, q);
        int r= solve(root->right, p, q);
        if((l==1 || r==1 || cur==1) && l+r+cur==2){
            ans= root;
            cout<<root<<" "<<p<<" "<<q<<endl;
            cout<<root<<" "<<l<<" "<<r<<" "<<cur<<endl;
            return 0;
        }

        return l+r+cur;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        solve(root, p, q);
        return ans;
    }
};

// 19 min
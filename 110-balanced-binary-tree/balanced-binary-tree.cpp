// POTD Feb'8, 2026
// Feb'8, 2026 11:43 am

class Solution {
    bool check(TreeNode* root, int mx, int curDepth){
        if(!root){
            return curDepth >= mx-1;
        }

        return check(root->left, mx, curDepth+1) && check(root->right, mx, curDepth+1);
    }
    // int depth(TreeNode* root){
    //     if(!root){
    //         return 0;
    //     }

    //     return 1+ max(depth(root->left), depth(root->right));
    // }
    int depth(TreeNode* root, map<TreeNode*, pair<int, int>>&depths){
        if(!root){
            return 0;
        }

        depths[root].first= 1+ depth(root->left, depths);
        depths[root].second= 1+ depth(root->right, depths);
        return max(depths[root].first, depths[root].second);
    }
public:
    bool isBalanced(TreeNode* root) {
        // int mx= depth(root);

        map<TreeNode*, pair<int, int>>depths;
        depth(root, depths);
        for(auto it: depths){
            if(abs(it.second.first - it.second.second) >1){
                return false;
            }
        }
        return true;
        // return check(root, mx, 0);
    }
};

// 15 min


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
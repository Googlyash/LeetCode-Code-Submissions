//POTD Oct'24, 2023
//Oct'24, 2023 05:20 pm

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
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int>v;
        queue<pair<TreeNode*, int>>q;
        // v.push_back(root->val);
        if(root!=NULL)q.push({root, 0});
        while(!q.empty()){
            int t=q.front().second;
            int k=q.front().first->val;
            TreeNode* node=q.front().first;
            if(v.size()<=t){
                v.push_back(k);
            }
            else {
                v[t]=max(k, v[t]);
            }
            q.pop();

            if(node->left!=NULL){
                q.push({node->left, t+1});
            }
            if(node->right!=NULL){
                q.push({node->right, t+1});
            }
        }
        return v;
    }
};
//8 min
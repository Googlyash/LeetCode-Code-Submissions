//POTD Nov'1, 2023
//Nov'1, 2023 07:16 pm

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
    void dfs(map<int, int>&mp, TreeNode* root){
        if(!root){
            return ;
        }

        mp[root->val]++;
        dfs(mp, root->left);
        dfs(mp, root->right);
    }
public:
    vector<int> findMode(TreeNode* root) {
        map<int, int>mp;
        vector<int>ans;
        dfs(mp, root);
        int mx=0;
        for(auto it:mp){
            mx=max(mx, it.second);
        }
        for(auto it:mp){
            if(it.second==mx){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};

//2min
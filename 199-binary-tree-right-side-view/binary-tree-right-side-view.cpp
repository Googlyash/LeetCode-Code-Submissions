// Mar'13, 2026 12:05 pm

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
    void solve(TreeNode* root, int cur, map<int, int>&mp){
        if(!root){
            return;
        }
        
        mp[cur]= root->val;
        solve(root->left, cur+1, mp);
        solve(root->right, cur+1, mp);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        map<int, int>mp;
        solve(root, 0, mp);
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};

// Tree Practice
// 4 min
// Mar'14, 2026 02:02 pm
// Tree Practice

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root){
            return {};
        }
        vector<vector<int>>ans;

        queue<TreeNode*>q;
        q.push(root);
        int cnt=0;
        while(!q.empty()){
            int n= q.size();

            vector<int>cur;
            for(int i=0;i<n;i++){
                TreeNode* temp= q.front();
                q.pop();

                cur.push_back(temp->val);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            if(cnt%2){
                reverse(cur.begin(), cur.end());
            }
            cnt++;
            ans.push_back(cur);
        }
        return ans;
    }
};
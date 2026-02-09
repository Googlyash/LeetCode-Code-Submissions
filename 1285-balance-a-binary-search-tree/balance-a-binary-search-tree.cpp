// POTD Feb'9, 2026
// Feb'10, 2026 12:35 am

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
    void vecMake(TreeNode* root, vector<int>&nodes){
        if(!root){
            return ;
        }
        vecMake(root->left, nodes);
        nodes.push_back(root->val);
        vecMake(root->right, nodes);
    }
    TreeNode* balance(vector<int>&nodes, int start, int end){
        if(start> end){
            return nullptr;
        }

        int mid= start+ (end - start)/2;
        TreeNode* cur= new TreeNode(nodes[mid]);
        cur->left= balance(nodes, start, mid-1);
        cur->right= balance(nodes, mid+1, end);
        return cur;
    }
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>nodes;
        vecMake(root, nodes);

        int n= nodes.size();
        vector<int>vis(n, -1);
        return balance(nodes, 0, n-1);
        // return ans;
    }
};

// 38 min
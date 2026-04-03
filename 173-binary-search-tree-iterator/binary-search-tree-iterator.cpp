// Apr'3, 2026 03:18 pm
// LLD Practice

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
class BSTIterator {
    vector<int>bst;
    int ind=0;

    void traverse(TreeNode* root, vector<int>&bst){
        if(!root){
            return;
        }
        traverse(root->left, bst);
        bst.push_back(root->val);
        traverse(root->right, bst);
    }
public:
    BSTIterator(TreeNode* root) {
        traverse(root, bst);

    }
    
    int next() {
        return bst[ind++];
    }
    
    bool hasNext() {
        return ind != bst.size();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */

// 5 min
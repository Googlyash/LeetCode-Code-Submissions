// Apr'3, 2026 03:26 pm
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
    stack<TreeNode*>bst;

    void traverse(TreeNode* root, stack<TreeNode*>&bst){
        if(!root){
            return;
        }
        bst.push(root);
        traverse(root->left, bst);
    }
public:
    BSTIterator(TreeNode* root) {
        traverse(root, bst);
    }
    
    int next() {
        TreeNode* top= bst.top();
        bst.pop();
        traverse(top->right, bst);
        return top->val;
    }
    
    bool hasNext() {
        return !bst.empty();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */

// 8 min
// For O(h) memory
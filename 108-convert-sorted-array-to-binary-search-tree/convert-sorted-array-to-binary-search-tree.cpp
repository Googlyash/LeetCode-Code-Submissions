//Aug'23, 2023 11:46 pm

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
    TreeNode* solve(int i, int j, vector<int>&nums){
        if(i>j || j>=nums.size() || i<0 || (j-i+1)/2<0 || (j-i+1)/2>=nums.size()){
            return NULL;
        }
        TreeNode*temp=new TreeNode(nums[i+(j-i)/2]);

        temp->left=solve(i, i+(j-i)/2-1, nums);
        temp->right=solve((j-i)/2+i+1, j, nums);
        return temp;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return solve(0, nums.size()-1, nums);
    }
};
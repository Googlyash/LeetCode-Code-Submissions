//POTD Aug'5, 2023
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
    vector<TreeNode*> gene(int strt, int end){
        vector<TreeNode*> v;
        if(strt> end){
            v.push_back(NULL);
            return v;
        }

        for(int i=strt; i<= end; i++){
            vector<TreeNode*> left= gene(strt, i-1);
            vector<TreeNode*> right= gene(i+1, end);

            for(int j=0; j< left.size(); j++){
                for(int k=0; k< right.size(); k++){
                    TreeNode* root= new TreeNode(i);
                    root->left= left[j];
                    root->right=right[k];
                    v.push_back(root);
                }
            }
        }
        return v;
    }
public:
    vector<TreeNode*> generateTrees(int n) {
        return gene(1, n);
    }
};

//Comments
//My Try

// class Solution {
    // unordered_map<int, int>mp;
// private:
    // TreeNode* f(int n, int cnt, TreeNode* &t, vector<TreeNode*> &v){
    //     if(cnt==n){
    //         // v.push_back(t);
    //         return t;
    //     }

    //     for(int i=1;i<=n;i++){
    //         if(mp[i]==1)continue;
    //         TreeNode* temp= new TreeNode();
    //         mp[i]=1;
    //         t=temp;
    //         temp->val= i;
    //         temp->left=temp->right= NULL;
    //         t=temp;
    //         t->left=f(n, cnt+1, temp->left, v);
    //         if(cnt==0)v.push_back(t);
    //         t->left=NULL;
    //         t->right=f(n, cnt+1, temp->right, v);
    //         if(cnt==0)v.push_back(t);
    //         t->right=NULL;
    //         mp[i]=0;
    //     }
    //     return t;
    // }
// public:
//     vector<TreeNode*> generateTrees(int n) {
        // TreeNode* t= NULL;
        // vector<TreeNode*> v;
        // f(n, 0, t, v);
        // return v;
//         return gene(1, n);
//     }
// };
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int Ldepth,Rdepth;
        if(root==NULL) return 0;
        Ldepth=maxDepth(root->left);
        Rdepth=maxDepth(root->right);
        return (Ldepth>Rdepth)? Ldepth+1:Rdepth+1;
    }
};
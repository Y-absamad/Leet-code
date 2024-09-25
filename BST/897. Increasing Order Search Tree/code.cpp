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
    void in(TreeNode* root , TreeNode*& current){
        if (root == nullptr)
            return;
        
        in(root->left,current);
        
        current->right = root;
        current = current->right;
        current->left = nullptr;
        
        in(root->right , current);
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* dummy  = new TreeNode(0);
        TreeNode* current = dummy ;
        in(root , current);
        return dummy ->right;
    }
};
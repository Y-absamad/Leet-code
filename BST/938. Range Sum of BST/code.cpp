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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if (root == nullptr) 
            return 0;

        int sum = 0;
        
        // If current node's value is within the range, add it to sum
        if (root->val >= low && root->val <= high)
            sum += root->val;
        
        // If current node's value is greater than low, we should check the left subtree
        if (root->val > low)
            sum += rangeSumBST(root->left, low, high);
        
        // If current node's value is less than high, we should check the right subtree
        if (root->val < high)
            sum += rangeSumBST(root->right, low, high);
        
        return sum;
    }
};
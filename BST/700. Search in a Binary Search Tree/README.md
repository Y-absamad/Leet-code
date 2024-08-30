# 700. Search in a Binary Search Tree

## [Leetcode link](https://leetcode.com/problems/search-in-a-binary-search-tree/description/)

## Problem Description 

You are given the `root` of a binary search tree (BST) and an integer `val`.

Find the node in the BST that the node's value equals `val` and return the subtree rooted with that node. If such a node does not exist, return `null`.

## Implementation  

```cpp
// cpp
**
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
    TreeNode* searchBST(TreeNode* root, int val) { 

        if(root == nullptr || root->val == val)
            return root;  
        else if(root->val > val)
            return searchBST(root->left , val); 
        else
            return searchBST(root->right , val);       

        return root;
    }
};

TreeNode* searchBST(TreeNode* root, int val) { //iterative method
        while(root){
            if(root->val==val) 
                return root;
            if(root->val>val) 
                root=root->left;
            else 
                root=root->right;
        }
        return NULL;
}

```



 

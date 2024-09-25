# 897. Increasing Order Search Tree

## [Leetcode link](https://leetcode.com/problems/increasing-order-search-tree/description/)

## Problem Description

Given the `root` of a binary search tree, rearrange the tree in in-order so that the leftmost node in the tree is now the root of the tree, and every node has no left child and only one right child.

## Code
```cpp
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
```
# 701. Insert into a Binary Search Tree

## [Leetcode link](https://leetcode.com/problems/insert-into-a-binary-search-tree/description/)

## Problem Description 

You are given the `root` node of a binary search tree (BST) and a `value` to insert into the tree. Return the root node of the BST after the insertion. It is **guaranteed** that the new value does not exist in the original BST.

Notice that there may exist multiple valid ways for the insertion, as long as the tree remains a BST after insertion. You can return **any of them**.


## Implementation  

```cpp
// cpp
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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == nullptr){
            TreeNode* newnode = new TreeNode(val); 
            return newnode;
        }
        else if(root->val > val)
            root->left = insertIntoBST(root->left , val);
        else if (root->val < val)
            root->right = insertIntoBST(root->right , val);    
        
        return root;
    }
};
```

## Another solution

```cpp
// cpp
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
    TreeNode* insertIntoBST(TreeNode* root, int val) { //iterative method
        TreeNode* newnode = new TreeNode(val);
        if (root == NULL)
            return newnode;
        
        TreeNode* temp = root;
        TreeNode* parent = nullptr;
        while(temp != nullptr)
        {
            parent = temp;
            if(val < temp->val)
                temp = temp->left;
            else
                temp = temp->right;    
        }
        if(val < parent->val)
            parent->left = newnode;
        else
            parent->right = newnode;

        return root;
    }

};
```
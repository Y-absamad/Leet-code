# 83. Remove Duplicates from Sorted List

## [Leetcode link](https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/)

## Problem Description 

Given the `head` of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list **sorted** as well.

## Implementation
 ```cpp
 // cpp
 /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
  ListNode *deleteDuplicates(ListNode *head)
  {
    ListNode *temp = head;
    while (temp != nullptr && temp->next != nullptr)
    {
      if (temp->val == temp->next->val)
      {
        temp->next = temp->next->next;
      }
      else
      {
        temp = temp->next;
      }
    }
    return head;
  }
};
```
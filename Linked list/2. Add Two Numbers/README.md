# 2. Add Two Numbers

## [Leetcode link](https://leetcode.com/problems/add-two-numbers/)

## Description

You are given two **non-empty** linked lists representing two non-negative integers. The digits are stored in **reverse order**, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

# Code
```cpp []
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
class Solution {
public:
 ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
  {
    ListNode *result = new ListNode();
    ListNode *temp = result;
    int cVal = 0;
    while (l1 || l2 || cVal)
    {
      int v1 = l1 != nullptr ? l1->val : 0;
      int v2 = l2 != nullptr ? l2->val : 0;

      int sum = v1 + v2 + cVal;
      temp->next = new ListNode(sum % 10);
      temp = temp->next;

      if (l1)
        l1 = l1->next;
      if (l2)
        l2 = l2->next;

      cVal = sum / 10;
    }
    return result->next;
  }
};
```
```Dart []
/**
 * Definition for singly-linked list.
 * class ListNode {
 *   int val;
 *   ListNode? next;
 *   ListNode([this.val = 0, this.next]);
 * }
 */
class Solution {
 ListNode? addTwoNumbers(ListNode? l1, ListNode? l2) {
    ListNode head = ListNode();
    ListNode temp = head;
    int c = 0;
    while (l1 != null || l2 != null || c != 0) {
      int v1 = l1 != null ? l1.val : 0;
      int v2 = l2 != null ? l2.val : 0;

      int sum = v1 + v2 + c;
      temp.next = new ListNode(sum % 10);
      temp = temp.next!;

      if (l1 != null) l1 = l1.next;
      if (l2 != null) l2 = l2.next;
      c = sum ~/ 10;
    }
    return head.next;
  }
}
```


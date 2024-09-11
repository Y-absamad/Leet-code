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
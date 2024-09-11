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
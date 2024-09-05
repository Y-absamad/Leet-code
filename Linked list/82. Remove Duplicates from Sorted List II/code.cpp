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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode* result = new ListNode(0);
        ListNode* temp = result;
        while (head) {
            if (!head->next || head->val != head->next->val) {
                temp->next = head;
                temp = temp->next;
            }
            while (head->next && head->val == head->next->val) {
                head = head->next;
            }
            head = head->next;
        }
        temp->next = nullptr;
        return result->next;
    }
};


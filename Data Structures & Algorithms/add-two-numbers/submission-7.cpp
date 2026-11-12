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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int sum = 0;
        int tens = 0;

        ListNode* dummy = new ListNode(0);
        ListNode* head = dummy;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int curr = carry;

            if (l1 != nullptr) {
                curr += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                curr += l2->val;
                l2 = l2->next;
            }

            if (curr >= 10) {
                curr -= 10;
                carry = 1;
            } else {
                carry = 0;
            }
            head->next = new ListNode(curr);
            head = head->next;
        }
        return dummy->next;
    }
};

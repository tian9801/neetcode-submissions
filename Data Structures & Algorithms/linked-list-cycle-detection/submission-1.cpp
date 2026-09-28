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
    bool hasCycle(ListNode* head) {
        std::unordered_map<ListNode*, int> map;
        ListNode* dummy = new ListNode();
        dummy = head;
        int ind = 0;
        while (dummy != nullptr) {
            if (map.count(dummy) != 0) {
                return true;
            }
            map[dummy] = ind;
            ind++;
            dummy = dummy->next;
        }
        return false;
    }
};

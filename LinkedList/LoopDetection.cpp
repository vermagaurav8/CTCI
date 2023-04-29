/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == nullptr ||head->next == nullptr) return nullptr;

        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* finder = head;

        while(fast->next != nullptr && fast->next->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;

            if (slow == fast) {
                while(slow != finder) {
                    slow = slow->next;
                    finder = finder->next;
                }
                return slow;
            }
        }

        return nullptr;
    }
};
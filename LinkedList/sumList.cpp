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
        if(l1 == nullptr) return l2;
        else if(l2 == nullptr) return l1;

        ListNode* dummyNode = new ListNode();
        ListNode* temp = dummyNode;
        int carry = 0;

        while(l1 || l2 || carry) {
            int sum = 0;
            if(l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            } 
            if(l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }
            sum += carry;
            carry = sum/10;

            ListNode* newNode = new ListNode(sum%10);
            temp->next = newNode;
            temp = temp->next;
        }
        return dummyNode->next;
    }
};
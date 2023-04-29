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

    int count(ListNode *head) {
        int count = 0;
        while(head != NULL){
            count++;
            head = head->next;
        }
        return count;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == nullptr || headB == nullptr) return NULL;

        int lenA = count(headA);
        int lenB = count(headB);

        if(lenA > lenB) {
            int skip = lenA-lenB;
            while(skip > 0) {
                headA = headA->next;
                skip--;
            }
        } else {
            int skip = lenB-lenA;
            while(skip > 0) {
                headB = headB->next;
                skip--;
            }
        }

		while(headA != NULL and headB != NULL){
			if(headA == headB){
				return headA;
			}
			headA = headA -> next;
			headB = headB -> next;
		}
        return NULL;
    }
};
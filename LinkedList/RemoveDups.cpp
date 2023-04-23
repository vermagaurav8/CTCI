class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        // your code goes here
        unordered_set<int> s;
        Node *curr = head, *prev = nullptr;
        while(curr != nullptr) {
            if(s.count(curr->data) == 0){
                s.insert(curr->data);
            }else {
                prev->next = curr->next;
                delete(curr);
                curr = prev;
            }
            prev = curr;
            curr = curr->next;
        }
        return head;
    }
};
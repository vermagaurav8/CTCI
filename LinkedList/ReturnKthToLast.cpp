//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node* temp = head;
       int len = 0;
       
       while(head != nullptr) {
           head =  head->next;
           len++;
       }
       
       if(len < N) return -1;
       
       for(int i = 0; i < (len-N+1); i++) {
           
       }
}
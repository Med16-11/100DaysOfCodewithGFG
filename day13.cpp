//Finding middle element in a linked list
int getMiddle(Node *head)
    {
        // Your code here
        Node *slow = head;
        Node *fast = head;
        
        while(fast != NULL and fast->next!=NULL){
            slow = slow -> next;
            fast = fast -> next ->next;
        }
        int ans = slow -> data;
        return ans;
    }

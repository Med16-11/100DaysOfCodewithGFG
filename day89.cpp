//Find n/k th node in Linked list 
int fractional_node(struct Node *head, int k)
{
    // your code here
    Node *temp = head;
    int count = 0;
    while(temp -> next != NULL)
    {
        count++;
        temp = temp -> next;
    }
    int idx = count/k;
    while(idx > 0)
    {   
        idx--;
        head = head->next;
    }
    return head->data;
}

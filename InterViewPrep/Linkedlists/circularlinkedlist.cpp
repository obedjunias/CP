void printList(struct Node *first) 
{ 
    struct Node *temp = first;  
  
    // If linked list is not empty 
    if (first != NULL)  
    { 
        // Keep printing nodes till we reach the first node again 
        do
        { 
            printf("%d ", temp->data); 
            temp = temp->next; 
        } 
        while (temp != first); 
    } 
} 
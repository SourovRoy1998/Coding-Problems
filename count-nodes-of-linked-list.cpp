//https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/1


// head : reference to head of linked list
int getCount(struct Node* head){
    //Code here
    int count=0;
    struct Node* t=head;
    while(t){
        count++;
        t=t->next;
    }
    return count;
}

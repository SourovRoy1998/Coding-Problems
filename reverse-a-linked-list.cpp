//https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//function Template for C++
/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
  }
*/
// Should reverse list and return new head.
Node* reverse(Node *head)
{
  Node* q=head;
  Node* p=nullptr;
  Node* r=nullptr;
  
  while(q){
      r=q->next;
      q->next=p;
      p=q;
      q=r;
  }
  return p;
  
}

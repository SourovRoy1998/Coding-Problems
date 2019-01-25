//https://practice.geeksforgeeks.org/problems/linked-list-length-even-or-odd/1

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*structure of a node of the linked list is as
struct Node
{
	int data;
	struct Node* next;
};
*/
// Function should return 0 is length is even else return 1
int isLengthEvenOrOdd(struct Node* head)
{
     int len=0;
     Node* temp=head;
     
     while(temp){
        temp=temp->next;
        len++;
     }
     return len%2;
}

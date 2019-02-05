//https://practice.geeksforgeeks.org/problems/vertical-width-of-a-binary-tree/1

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
/*Structure of node of binary tree is as
struct Node
{
	int data;
	struct Node *left, *right;
};
*/
// your task is to complete this functionh
// function should return the width of the tree
void traversal(Node* root, int& maxi, int& mini, int rank){
    if(!root)
        return;
    maxi=max(maxi,rank);
    mini=min(mini,rank);
    traversal(root->left, maxi, mini, rank-1);
    traversal(root->right, maxi, mini, rank+1);
}


int verticalWidth(Node* root)
{
    // Code here
    int maxi=0, mini=0, rank=0;
    
    traversal(root, maxi, mini, 0);
    return maxi-mini+1;
}
